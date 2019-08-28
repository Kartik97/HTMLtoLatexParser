%{
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int i=0;

extern int yylex();
extern void yyerror(const char*);
char* concat(char *s1,char *s2);
%}

// %name parse
%union{
	char* object;
	char* value;
}

%start st
%token DOCTYPE
%token HTMLOP
%token HTMLCL
%token HEADOP
%token HEADCL
%token TITLEOP
%token TITLECL
%token BODYOP
%token BODYCL
%token BPHRASEOP
%token BPHRASECL
%token PHRASEOP
%token PHRASECL
%token GTPHOP
%token GTPHCL
%token TEXT
%token AOPOP AOP ACL
%token ATTRIBUTE
%token ATTRIBUTEVAL
%token DIVOP DIVCL
%token IMGOP IMGCL
%token FONTOP FONTOOP FONTCL
%token LOP LCL LIOP LICL
%token FIGOP FIGCL FIGCAPOP FIGCAPCL
%token DLOP DLCL DTOP DTCL DDOP DDCL
%token <value> TABOP TABCL CAPOP CAPCL TROP TRCL THOP THCL TDOP TDCL BR
%token <value> COMMENT SPCHAR SYMBOL CENTEROP CENTERCL

%type <value> ATTRIBUTE DOCTYPE HTMLOP HTMLCL HEADOP HEADCL TITLEOP TITLECL TEXT BODYOP BODYCL PHRASEOP PHRASECL BPHRASEOP BPHRASECL
%type <value> ATTRIBUTEVAL AOP AOPOP ACL IMGOP IMGCL LOP LCL LIOP LICL FIGCAPOP FIGCAPCL
%type <value> GTPHOP GTPHCL DIVOP DIVCL FONTOP FONTOOP FONTCL FIGOP FIGCL
%type <value> DLOP DLCL DTOP DTCL DDOP DDCL 
%type <value> head title body flow phraseopen phrases listitem list misc consume gtph phr div dl dt dd table caption tr th td figure
%type <value> figcap img atag miscph consumeph atagph font fontph center centerph

%%

st:	DOCTYPE { cout<<$1<<endl; } 
	| DOCTYPE HTMLOP HTMLCL { char *p=concat($1,$2); cout<<concat(p,$3)<<endl; }
	| HTMLOP HTMLCL { cout<<concat($1,$2)<<endl; }
	| DOCTYPE HTMLOP head HTMLCL { char *p=concat($1,$2),*y=concat(p,$3); cout<<concat(y,$4)<<endl; }
	| HTMLOP head HTMLCL { char *p=concat($1,$2); cout<<concat(p,$3)<<endl; }
	| DOCTYPE HTMLOP head body HTMLCL { char *p=concat($1,$2),*y=concat(p,$3),*x=concat(y,$4); cout<<concat(x,$5)<<endl;}
	| HTMLOP head body HTMLCL { char *p=concat($1,$2),*y=concat(p,$3); cout<<concat(y,$4)<<endl; }
	| DOCTYPE HTMLOP body HTMLCL { char *p=concat($1,$2),*y=concat(p,$3); cout<<concat(y,$4)<<endl; }
	| HTMLOP body HTMLCL { char *p=concat($1,$2); cout<<concat(p,$3)<<endl; }
	;

head: HEADOP title HEADCL { char *p=concat($1,$2); $$=concat(p,$3); } 
	| HEADOP HEADCL { $$=concat($1,$2); }
	;

title:	TITLEOP TITLECL { $$=concat($1,$2); }
	| TITLEOP consume TITLECL  { char *p=concat($1,$2); $$=concat(p,$3); }
	;

body: BODYOP flow BODYCL  { char *p=concat($1,$2); $$=concat(p,$3); }
	| BODYOP BODYCL { $$=concat($1,$2); }
	;

misc: COMMENT {$$=$1; }
	| BR {$$=$1; }
	| TEXT {$$=$1; }
	| IMGOP img {$$=concat($1,$2); }
	| SYMBOL {$$=$1; }
	;

consume: consume misc { $$=concat($1,$2); }
	| misc {$$=$1; }
	;

miscph: misc {$$=$1; } 
	| AOP atagph {$$=concat($1,$2); }
	| FONTOP fontph {$$=concat($1,$2); }
	| CENTEROP centerph {}
	;
	
consumeph: consumeph miscph {$$=concat($1,$2); }
	| miscph {$$=$1; }
	;

flow: BPHRASEOP phraseopen { $$=concat($1,$2); }
	| GTPHOP gtph { $$=concat($1,$2); }
	| LOP list { $$=concat($1,$2); }
	| misc flow { $$=concat($1,$2); }
	| misc {$$=$1;}
	| DIVOP div { $$=concat($1,$2); }
	| DLOP dl {$$=concat($1,$2); }
	| TABOP table {$$=concat($1,$2); }
	| FIGOP figure {$$=concat($1,$2); }
	| AOP atag { $$=concat($1,$2); }
	| FONTOP font { $$=concat($1,$2); }
	| CENTEROP center { $$=concat($1,$2); }
	;

center: flow CENTERCL { $$=concat($1,$2); }
	| flow CENTERCL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	| CENTERCL {$$=$1; }
	| CENTERCL flow { $$=concat($1,$2); }
	;

phraseopen: phrases BPHRASECL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	| BPHRASECL flow { $$=concat($1,$2); }
	| BPHRASECL { $$=$1; }
	| phrases BPHRASECL { $$=concat($1,$2); }
	| consumeph BPHRASECL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	| consumeph BPHRASECL { $$=concat($1,$2); }
	;

phrases: PHRASEOP phr { $$=concat($1,$2); }
	| consumeph PHRASEOP phr { char *p=concat($1,$2); $$=concat(p,$3); } 
	;

phr: PHRASECL {$$=$1; }
	| phrases PHRASECL { $$=concat($1,$2); }
	| PHRASECL phrases { $$=concat($1,$2); }
	| PHRASECL consumeph { $$=concat($1,$2); }
	| consumeph PHRASECL { $$=concat($1,$2); }
	| consumeph PHRASECL phrases { char *p=concat($1,$2); $$=concat(p,$3); }
	| consumeph PHRASECL consumeph { char *p=concat($1,$2); $$=concat(p,$3); }
	;

fontph: ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP phrases FONTCL { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	| FONTOOP phrases FONTCL { char *p=concat($1,$2); $$=concat(p,$3); }
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP consumeph FONTCL { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	| FONTOOP consumeph FONTCL { char *p=concat($1,$2); $$=concat(p,$3); }
	;

atagph: ATTRIBUTE ATTRIBUTEVAL AOPOP phrases ACL { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
    | AOPOP phrases ACL { char *p=concat($1,$2); $$=concat(p,$3); }
    | AOPOP ACL {$$=concat($1,$2); }
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	;

gtph: phrases GTPHCL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	| phrases GTPHCL { $$=concat($1,$2); }
	| GTPHCL flow { $$=concat($1,$2); }
	| GTPHCL {$$=$1; }
	| consumeph GTPHCL { $$=concat($1,$2); }
	| consumeph GTPHCL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	| BPHRASEOP phraseopen GTPHCL flow { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
	| BPHRASEOP phraseopen GTPHCL { char *p=concat($1,$2); $$=concat(p,$3); }
	| consumeph BPHRASEOP phraseopen GTPHCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5);}
	| consumeph BPHRASEOP phraseopen GTPHCL { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
	;

centerph: phrases CENTERCL { $$=concat($1,$2); }
	| consumeph CENTERCL { $$=concat($1,$2); }
	| CENTERCL {$$=$1; }
	| BPHRASEOP phraseopen CENTERCL { char *p=concat($1,$2); $$=concat(p,$3); }
	| consumeph BPHRASEOP phraseopen CENTERCL { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
	;

list: LIOP listitem list { char *p=concat($1,$2); $$=concat(p,$3); }
	| LCL {$$=$1; }
	| consume LIOP listitem list { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
	| consume LCL { $$=concat($1,$2); }
	| LCL flow { $$=concat($1,$2); }
	| consume LCL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	;

listitem: flow LICL {$$=concat($1,$2); }
	| LICL {$$=$1; }
	;

div: DIVCL {$$=$1; }
	| DIVCL flow {$$=concat($1,$2); }
	| flow DIVCL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	| flow DIVCL {$$=concat($1,$2); }
	;

dl: DLCL {$$=$1; }
	| consume DLCL { $$=concat($1,$2); }
	| DIVOP div DLCL { char *p=concat($1,$2); $$=concat(p,$3); }
	| consume DIVOP div DLCL { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
	| DLCL flow {concat($1,$2); }
	| consume DLCL flow { char *p=concat($1,$2); $$=concat(p,$3); }
    | DIVOP div DLCL flow { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
    | consume DIVOP div DLCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
    | DTOP dt DLCL { char *p=concat($1,$2); $$=concat(p,$3); }
    | DTOP dt DLCL flow { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
    | consume DTOP dt DLCL { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
    | consume DTOP dt DLCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	;

dt: flow DTCL DDOP dd { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
	| flow DTCL consume DDOP dd { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	| flow DTCL DDOP dd DTOP dt { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4),*z=concat(y,$5); $$=concat(z,$6); }
	| DTCL DDOP dd { char *p=concat($1,$2); $$=concat(p,$3); }
    | DTCL DDOP dd DTOP dt { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	;

dd: flow DDCL {$$=concat($1,$2); }
	| flow DDCL DDOP dd { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
	| DDCL {$$=$1; }
	| DDCL DDOP dd { char *p=concat($1,$2); $$=concat(p,$3); }
	| flow DDCL consume { char *p=concat($1,$2); $$=concat(p,$3); }
	| flow DDCL consume DDOP dd { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	| DDCL consume {$$=concat($1,$2); }
	| DDCL consume DDOP dd { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	;

caption: flow CAPCL {$$=concat($1,$2); } 
	| CAPCL {$$=$1; }
	| flow CAPCL consume { char *p=concat($1,$2); $$=concat(p,$3); }
	| CAPCL consume {$$=concat($1,$2); }
	;

table: CAPOP caption TABCL { char *p=concat($1,$2); $$=concat(p,$3); }
	| CAPOP caption TABCL flow { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| consume CAPOP caption TABCL { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| consume CAPOP caption TABCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	| CAPOP caption TROP tr TABCL { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	| TROP tr TABCL { char *p=concat($1,$2); $$=concat(p,$3); }
    | CAPOP caption TROP tr TABCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4),*z=concat(y,$5); $$=concat(z,$6); }
    | TROP tr TABCL flow { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| TABCL {$$=$1; }
	| TABCL flow {$$=concat($1,$2); }
	;

tr: TRCL {$$=$1; }
	| consume TRCL {$$=concat($1,$2); }
	| THOP th TRCL { char *p=concat($1,$2); $$=concat(p,$3); }
	| TDOP td TRCL { char *p=concat($1,$2); $$=concat(p,$3); }
	| TRCL consume {$$=concat($1,$2); }
	| consume TRCL consume { char *p=concat($1,$2); $$=concat(p,$3); }
	| THOP th TRCL consume { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| TDOP td TRCL consume { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| TRCL TROP tr  { char *p=concat($1,$2); $$=concat(p,$3); }
	| TRCL consume TROP tr { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
    | THOP th TRCL TROP tr { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
    | TDOP td TRCL TROP tr { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
    | THOP th TRCL consume TROP tr { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4),*z=concat(y,$5); $$=concat(z,$6); }
    | TDOP td TRCL consume TROP tr { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4),*z=concat(y,$5); $$=concat(z,$6); }
	;

th: THCL {$$=$1; }
	| flow THCL {$$=concat($1,$2); } 
	| THCL consume {$$=concat($1,$2); }
	| flow THCL consume  { char *p=concat($1,$2); $$=concat(p,$3); }
	| THCL THOP th  { char *p=concat($1,$2); $$=concat(p,$3); }
	| flow THCL THOP th { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| THCL consume THOP th { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| flow THCL consume THOP th { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	;

td: TDCL {$$=$1; }
    | flow TDCL {$$=concat($1,$2); }
    | TDCL consume {$$=concat($1,$2); }
    | flow TDCL consume { char *p=concat($1,$2); $$=concat(p,$3); }
    | TDCL TDOP td { char *p=concat($1,$2); $$=concat(p,$3); }
    | flow TDCL TDOP td { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
    | TDCL consume TDOP td { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
    | flow TDCL consume TDOP td { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
    ;

figure: flow FIGCAPOP figcap FIGCL { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| FIGCAPOP figcap FIGCL { char *p=concat($1,$2); $$=concat(p,$3); }
	| FIGCAPOP figcap flow FIGCL { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| flow FIGCL {$$=concat($1,$2); }
	| FIGCL {$$=$1; }
	| flow FIGCAPOP figcap FIGCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
    | FIGCAPOP figcap FIGCL flow { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| FIGCAPOP figcap flow FIGCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
    | flow FIGCL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	| FIGCL flow {$$=concat($1,$2); }
	| flow FIGCAPOP figcap flow FIGCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4),*z=concat(y,$5); $$=concat(z,$6); }
	| flow FIGCAPOP figcap flow FIGCL { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	;

figcap: flow FIGCAPCL {$$=concat($1,$2); }
	| FIGCAPCL {$$=$1; }
	;

img:  ATTRIBUTE ATTRIBUTEVAL img { char *p=concat($1,$2); $$=concat(p,$3); }
	| IMGCL {$$=$1; } 
	; 

atag: ATTRIBUTE ATTRIBUTEVAL AOPOP flow ACL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4),*z=concat(y,$5); $$=concat(z,$6); }
	| AOPOP flow ACL flow { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| AOPOP ACL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	| ATTRIBUTE ATTRIBUTEVAL AOPOP flow ACL { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
    | AOPOP flow ACL { char *p=concat($1,$2); $$=concat(p,$3); }
    | AOPOP ACL {$$=concat($1,$2); }
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	;

font: ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP flow FONTCL { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	| FONTOOP flow FONTCL { char *p=concat($1,$2); $$=concat(p,$3); }
	|ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5); }
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP flow FONTCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4),*z=concat(y,$5); $$=concat(z,$6); }
	| FONTOOP flow FONTCL flow { char *p=concat($1,$2),*x=concat(p,$3);$$=concat(x,$4); }
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