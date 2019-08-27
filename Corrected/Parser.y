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
%token <value> COMMENT SPCHAR

%type <value> ATTRIBUTE DOCTYPE HTMLOP HTMLCL HEADOP HEADCL TITLEOP TITLECL TEXT BODYOP BODYCL PHRASEOP PHRASECL BPHRASEOP BPHRASECL
%type <value> ATTRIBUTEVAL AOP AOPOP ACL IMGOP IMGCL LOP LCL LIOP LICL FIGCAPOP FIGCAPCL
%type <value> GTPHOP GTPHCL DIVOP DIVCL FONTOP FONTOOP FONTCL FIGOP FIGCL
%type <value> DLOP DLCL DTOP DTCL DDOP DDCL 
%type <value> head title body flow phraseopen phrases listitem list misc consume gtph phr div


%%

st:	DOCTYPE { cout<<$1; } 
	| DOCTYPE HTMLOP HTMLCL { char *p=concat($1,$2); cout<<concat(p,$3); }
	| HTMLOP HTMLCL { cout<<concat($1,$2); }
	| DOCTYPE HTMLOP head HTMLCL { char *p=concat($1,$2),*y=concat(p,$3); cout<<concat(y,$4); }
	| HTMLOP head HTMLCL { char *p=concat($1,$2); cout<<concat(p,$3); }
	| DOCTYPE HTMLOP head body HTMLCL { char *p=concat($1,$2),*y=concat(p,$3),*x=concat(y,$4); cout<<concat(x,$5);}
	| HTMLOP head body HTMLCL { char *p=concat($1,$2),*y=concat(p,$3); cout<<concat(y,$4); }
	| DOCTYPE HTMLOP body HTMLCL { char *p=concat($1,$2),*y=concat(p,$3); cout<<concat(y,$4); }
	| HTMLOP body HTMLCL { char *p=concat($1,$2); cout<<concat(p,$3); }
	;

head:	HEADOP title HEADCL { char *p=concat($1,$2); $$=concat(p,$3); } 
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
	;

consume: consume misc { $$=concat($1,$2); }
	| misc {$$=$1; }
	;

flow: BPHRASEOP phraseopen { $$=concat($1,$2); }
	| GTPHOP gtph { $$=concat($1,$2); }
	| LOP list { $$=concat($1,$2); }
	| misc flow { $$=concat($1,$2); }
	| misc {$$=$1;}
	| DIVOP div { $$=concat($1,$2); }
	;

phraseopen: phrases BPHRASECL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	| BPHRASECL flow { $$=concat($1,$2); }
	| BPHRASECL { $$=$1; }
	| phrases BPHRASECL { $$=concat($1,$2); }
	;

phrases: PHRASEOP phr { $$=concat($1,$2); }
	| consume PHRASEOP phr { char *p=concat($1,$2); $$=concat(p,$3); }
	;

phr: PHRASECL {$$=$1; }
	| phrases PHRASECL { $$=concat($1,$2); }
	| PHRASECL phrases { $$=concat($1,$2); }
	| PHRASECL consume { $$=concat($1,$2); }
	| consume PHRASECL { $$=concat($1,$2); }
	| consume PHRASECL phrases { char *p=concat($1,$2); $$=concat(p,$3); }
	| consume PHRASECL consume { char *p=concat($1,$2); $$=concat(p,$3); }
	;

gtph: phrases GTPHCL flow { char *p=concat($1,$2); $$=concat(p,$3); }
	| GTPHCL flow { $$=concat($1,$2); }
	| phrases GTPHCL { $$=concat($1,$2); }
	| GTPHCL {$$=$1; }
	| consume GTPHCL { $$=concat($1,$2); }
	| BPHRASEOP phraseopen GTPHCL flow { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
	| BPHRASEOP phraseopen GTPHCL { char *p=concat($1,$2); $$=concat(p,$3); }
	| consume BPHRASEOP phraseopen GTPHCL flow { char *p=concat($1,$2),*x=concat(p,$3),*y=concat(x,$4); $$=concat(y,$5);}
	| consume BPHRASEOP phraseopen GTPHCL { char *p=concat($1,$2),*x=concat(p,$3); $$=concat(x,$4); }
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
/*
dl: DLCL {cout<<$1; }
	| DIVOP div DLCL {cout<<$1<<" "<<$3; }
	| DTOP dt DLCL {cout<<$1<<" "<<$3; }
	| DLCL flow {cout<<$1; }
    | DIVOP div DLCL flow {cout<<$1<<" "<<$3; }
    | DTOP dt DLCL flow {cout<<$1<<" "<<$3; }
	;

dt: flow DTCL DDOP dd {cout<<$2<<" "<<$3; }
	| flow DTCL DDOP dd DTOP dt {cout<<$2<<" "<<$3<<" "<<$5; }
	| DTCL DDOP dd {cout<<$1<<" "<<$2; } 
    | DTCL DDOP dd DTOP dt {cout<<$1<<" "<<$2<<" "<<$4; }
	;

dd: flow DDCL {cout<<$2; }
	| flow DDCL DDOP dd {cout<<$2<<" "<<$3; }
	| DDCL {cout<<$1; }
	| DDCL DDOP dd {cout<<$1<<" "<<$2; }
	;
*/

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