%{
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include "ast.h"

using namespace std;
int i=0;
extern int yylex();
extern void yyerror(const char*);
char* concat(char *s1,char *s2);

%}

// %name parse
%union{
	treeNode* object;
	char* value;
}

%start st
%token <value> DOCTYPE
%token <value> HTMLOP
%token <value> HTMLCL
%token <value>  HEADOP
%token <value> HEADCL
%token <value> TITLEOP
%token <value> TITLECL
%token <value> BODYOP
%token <value> BODYCL
%token <value> BPHRASEOP
%token <value> BPHRASECL
%token <value> PHRASEOP
%token <value> PHRASECL
%token <value> GTPHOP
%token <value> GTPHCL
%token <value> TEXT
%token <value> AOPOP AOP ACL
%token <value> ATTRIBUTE
%token <value> ATTRIBUTEVAL
%token <value> DIVOP DIVCL
%token <value> IMGOP IMGCL
%token <value> FONTOP FONTOOP FONTCL
%token <value> LOP LCL LIOP LICL
%token <value> FIGOP FIGCL FIGCAPOP FIGCAPCL
%token <value> DLOP DLCL DTOP DTCL DDOP DDCL
%token <value> TABOP TABCL CAPOP CAPCL TROP TRCL THOP THCL TDOP TDCL BR
%token <value> COMMENT SPCHAR SYMBOL CENTEROP CENTERCL
%type <object> head title body flow phraseopen phrases listitem list misc consume gtph phr div dl dt dd table caption tr th td
%type <object> figcap atag miscph consumeph atagph font fontph img figure

%%

st:	DOCTYPE { 
			} 
	| DOCTYPE HTMLOP HTMLCL {
			}
	| HTMLOP HTMLCL {
			}
	| DOCTYPE HTMLOP head HTMLCL {
			}
	| HTMLOP head HTMLCL { print($2);
			}
	| DOCTYPE HTMLOP head body HTMLCL {
			}
	| HTMLOP head body HTMLCL {
			}
	| DOCTYPE HTMLOP body HTMLCL {
			}
	| HTMLOP body HTMLCL {
			}
	;

head: HEADOP title HEADCL { 
				treeNode* node = add_node("HEAD");
				add_children(node,$2);
				$$=node;
			} 
	| HEADOP HEADCL { 
				$$=add_node("HEAD");
			}
	;

title:	TITLEOP TITLECL {
				$$=add_node("TITLE"); 	
			}
	| TITLEOP consume TITLECL  {
				treeNode* title=add_node("TITLE");
				$$=update_children(title,$2);
			}
	;

body: BODYOP flow BODYCL  {
			}
	| BODYOP BODYCL {
			$$=add_node("BODY");
			}
	;

misc: COMMENT { $$=add_node("COMMENT",$1);
			}
	| BR 	{ $$=add_node("BR");
			}
	| TEXT  { $$=add_node("TEXT",$1);
			}
	| IMGOP img {
			$$=$2;
		}
	| SYMBOL {
			$$=add_node("SYMBOL",$1);
		}
	;

consume: consume misc {
			add_children($1,$2);
			$$=$1;
		}
	| misc {
			$$=$1;
		}
	;

miscph: misc {
		$$=$1;
		}
	| AOP atagph {
		}
	| FONTOP fontph {
		}
	| CENTEROP centerph {
		}
	;
	
consumeph: consumeph miscph {
		}
	| miscph {
		}
	;

flow: BPHRASEOP phraseopen { 
		}
	| GTPHOP gtph { 
		}
	| LOP list { 
		}
	| misc flow {
		}
	| misc {
		}
	| DIVOP div { 
		}
	| DLOP dl {
		}
	| TABOP table {
		}
	| FIGOP figure {
		}
	| AOP atag { 
		}
	| FONTOP font { 
		}
	| CENTEROP center { 
		}
	;

center: flow CENTERCL { 
		}
	| flow CENTERCL flow { 
		}
	| CENTERCL {
		}
	| CENTERCL flow { 
		}
	;

phraseopen: phrases BPHRASECL flow { 
		
		}
	| BPHRASECL flow { 
		}
	| BPHRASECL { 
		}
	| phrases BPHRASECL { 
		}
	| consumeph BPHRASECL flow { 
		}
	| consumeph BPHRASECL { 
		}
	;

phrases: PHRASEOP phr { 
		}
	| consumeph PHRASEOP phr { 
		}
	;

phr: PHRASECL {
		}
	| phrases PHRASECL { 
		}
	| PHRASECL phrases { 
		}
	| PHRASECL consumeph { 
		}
	| consumeph PHRASECL { 
		}
	| consumeph PHRASECL phrases { 
		}
	| consumeph PHRASECL consumeph { 
		}
	;

fontph: ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL { 
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP phrases FONTCL { 
		}
	| FONTOOP phrases FONTCL { 
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP consumeph FONTCL { 
		}
	| FONTOOP consumeph FONTCL { 
		}
	;

atagph: ATTRIBUTE ATTRIBUTEVAL AOPOP phrases ACL { 
		}
    | AOPOP phrases ACL { 
    	}
    | ATTRIBUTE ATTRIBUTEVAL AOPOP consumeph ACL { 
    	}
    | AOPOP consumeph ACL { 
    	}
    | AOPOP ACL {
    	}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL { 
		}
	;

gtph: phrases GTPHCL flow { 
		}
	| phrases GTPHCL { 
		}
	| GTPHCL flow { 
		}
	| GTPHCL {
		}
	| consumeph GTPHCL { 
		}
	| consumeph GTPHCL flow { 
		}
	| BPHRASEOP phraseopen GTPHCL flow { 
		}
	| BPHRASEOP phraseopen GTPHCL { 
		}
	| consumeph BPHRASEOP phraseopen GTPHCL flow { 
		}
	| consumeph BPHRASEOP phraseopen GTPHCL { 
		}
	;

centerph: phrases CENTERCL { 
		}
	| consumeph CENTERCL { 
		}
	| CENTERCL {
		}
	| BPHRASEOP phraseopen CENTERCL {
		}
	| consumeph BPHRASEOP phraseopen CENTERCL {
		}
	;

list: LIOP listitem list {
		}
	| LCL {
		}
	| consume LIOP listitem list {
		}
	| consume LCL {
		}
	| LCL flow {
		}
	| consume LCL flow {
		}
	;

listitem: flow LICL {
		}
	| LICL {
		}
	;

div: DIVCL {
		}
	| DIVCL flow {
		}
	| flow DIVCL flow {
		}
	| flow DIVCL {
		}
	;

dl: DLCL {
		}
	| consume DLCL {
		}
	| DIVOP div DLCL {
		}
	| consume DIVOP div DLCL {
		}
	| DLCL flow {
		}
	| consume DLCL flow {
		}
    | DIVOP div DLCL flow {
    	}
    | consume DIVOP div DLCL flow {
    	}
    | DTOP dt DLCL { 
    	}
    | DTOP dt DLCL flow {
    	}
    | consume DTOP dt DLCL {
    	}
    | consume DTOP dt DLCL flow {
    	}
	;

dt: flow DTCL DDOP dd {
		}
	| flow DTCL consume DDOP dd {
		}
	| flow DTCL DDOP dd DTOP dt {
		}
	| DTCL DDOP dd {
		}
    | DTCL DDOP dd DTOP dt {
    	}
	;

dd: flow DDCL {
		}
	| flow DDCL DDOP dd {
		}
	| DDCL {
		}
	| DDCL DDOP dd {
		}
	| flow DDCL consume {
		}
	| flow DDCL consume DDOP dd {
		}
	| DDCL consume {
		}
	| DDCL consume DDOP dd {
		}
	;

caption: flow CAPCL {
		}
	| CAPCL {
		}
	| flow CAPCL consume {
		}
	| CAPCL consume {
		}
	;

table: CAPOP caption TABCL {
		}
	| CAPOP caption TABCL flow {
		}
	| consume CAPOP caption TABCL {
		}
	| consume CAPOP caption TABCL flow {
		}
	| CAPOP caption TROP tr TABCL {
		}
	| TROP tr TABCL {
		}
    | CAPOP caption TROP tr TABCL flow {
    	}
    | TROP tr TABCL flow {
    	}
	| TABCL {
		}
	| TABCL flow {
		}
	;

tr: TRCL {
		}
	| consume TRCL {
		}
	| THOP th TRCL {
		}
	| TDOP td TRCL {
		}
	| TRCL consume {
		}
	| consume TRCL consume {
		}
	| THOP th TRCL consume {
		}
	| TDOP td TRCL consume {
		}
	| TRCL TROP tr  { 
		}
	| TRCL consume TROP tr {
		}
    | THOP th TRCL TROP tr {
    	}
    | TDOP td TRCL TROP tr {
    	}
    | THOP th TRCL consume TROP tr {
    	}
    | TDOP td TRCL consume TROP tr {
    	}
	;

th: THCL {
		}
	| flow THCL {
		}
	| THCL consume {
		}
	| flow THCL consume  {
		}
	| THCL THOP th  {
		}
	| flow THCL THOP th {
		}
	| THCL consume THOP th {
		}
	| flow THCL consume THOP th { 
		}
	;

td: TDCL {	
		}
    | flow TDCL {
    	}
    | TDCL consume {
    	}
    | flow TDCL consume {
    	}
    | TDCL TDOP td {
    	}
    | flow TDCL TDOP td {
    	}
    | TDCL consume TDOP td {
    	}
    | flow TDCL consume TDOP td {
    	}
    ;

figure: flow FIGCAPOP figcap FIGCL {
		}
	| FIGCAPOP figcap FIGCL {
		}
	| FIGCAPOP figcap flow FIGCL { 
		}
	| flow FIGCL {
		}
	| FIGCL {
		}
	| flow FIGCAPOP figcap FIGCL flow {
		}
    | FIGCAPOP figcap FIGCL flow {
    	}
	| FIGCAPOP figcap flow FIGCL flow {
		}
    | flow FIGCL flow {
    	}
	| FIGCL flow {
		}
	| flow FIGCAPOP figcap flow FIGCL flow {
		}
	| flow FIGCAPOP figcap flow FIGCL {
		}
	;

figcap: flow FIGCAPCL {
		}
	| FIGCAPCL {
		}
	;

img:  ATTRIBUTE ATTRIBUTEVAL img {
				add_attributes($3,$1,$2);
				$$=$3;
		}
	| IMGCL { 	treeNode* node=add_node("IMG");
				$$=node;
		} 
	; 

atag: ATTRIBUTE ATTRIBUTEVAL AOPOP flow ACL flow {
		}
	| AOPOP flow ACL flow {
		}
	| AOPOP ACL flow {
		}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP flow ACL {
		}
    | AOPOP flow ACL { 
   		}
    | AOPOP ACL {
   		}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL flow {
		}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL {
		}
	;

font: ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL {
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP flow FONTCL {
		}
	| FONTOOP flow FONTCL {
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL flow {
		}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP flow FONTCL flow {
		}
	| FONTOOP flow FONTCL flow {
		}
	;

%%
void yyerror(const char *msg){
	printf("%s\n",msg);
}

int main(int argc,char **argv){
	extern FILE *yyin;
	if(argc >= 2){
		if(!(yyin = fopen(argv[1],"r"))){
			printf("File Error");
			return 0;
		}
	}
	yyparse();
	return 0;
}  
char* concat(char *s1,char *s2){
	char *p = (char *)malloc(1+strlen(s1)+strlen(s2));
	strcat(p,s1);
	strcat(p,s2);
	return p;	
}