%{
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int i=0;

extern int yylex();
extern void yyerror(const char*);

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
%type <value> head title body flow phraseopen phrases listitem list misc consume gtph phr


%%

st:	DOCTYPE { cout<<$1; } 
	| DOCTYPE HTMLOP HTMLCL {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							cout<<p; }
	| HTMLOP HTMLCL { char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							cout<<p; }
	| DOCTYPE HTMLOP head HTMLCL {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3)+strlen($4));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							strcat(p,$4);
							cout<<p; }
	| HTMLOP head HTMLCL {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							cout<<p; }
	| DOCTYPE HTMLOP head body HTMLCL {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							strcat(p,$4);
							strcat(p,$5);
							cout<<p; }	
	| HTMLOP head body HTMLCL {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3)+strlen($4));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							strcat(p,$4);
							cout<<p; }
	| DOCTYPE HTMLOP body HTMLCL {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3)+strlen($4));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							strcat(p,$4);
							cout<<p; }
	| HTMLOP body HTMLCL {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							cout<<p; }
	;

head:	HEADOP title HEADCL {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p; } 
	| HEADOP HEADCL {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p;  }
	;

title:	TITLEOP TITLECL { char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| TITLEOP consume TITLECL { char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p; }
	;

body: BODYOP flow BODYCL  { char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p; }
	| BODYOP BODYCL { char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	;

misc: COMMENT {$$=$1; }
	| BR {$$=$1; }
	| TEXT {$$=$1; }
	;

consume: consume misc {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p;}
	| misc {$$=$1; }
	;

flow: BPHRASEOP phraseopen {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| GTPHOP gtph {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| LOP list {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| misc flow {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p;}
	| misc {$$=$1;}
	;

phraseopen: phrases BPHRASECL flow {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p; }
	| BPHRASECL flow { char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| BPHRASECL { $$=$1; }
	| phrases BPHRASECL {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	;

phrases: PHRASEOP phr {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| consume PHRASEOP phr {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p; };
	;

phr: PHRASECL {$$=$1; }
	| phrases PHRASECL {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| PHRASECL phrases {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| PHRASECL consume {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| consume PHRASECL {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| consume PHRASECL phrases {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p; }
	| consume PHRASECL consume {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p; }
	;

gtph: phrases GTPHCL flow {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p; }
	| GTPHCL flow {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| phrases GTPHCL {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| GTPHCL {$$=$1; }
	| consume GTPHCL {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| BPHRASEOP phraseopen GTPHCL flow {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3)+strlen($4));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							strcat(p,$4);
							$$=p; }
	| BPHRASEOP phraseopen GTPHCL {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p; }
	| consume BPHRASEOP phraseopen GTPHCL flow {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							strcat(p,$4);
							strcat(p,$5);
							$$=p; }
	| consume BPHRASEOP phraseopen GTPHCL {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3)+strlen($4));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							strcat(p,$4);
							$$=p; }
	;

list: LIOP listitem list {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p;}
	| LCL {$$=$1; }
	| consume LIOP listitem list {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3)+strlen($4));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							strcat(p,$4);
							$$=p; }
	| consume LCL {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| LCL flow {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| consume LCL flow {char *p = (char *)malloc(1+strlen($1)+strlen($2)+strlen($3));
							strcat(p,$1);
							strcat(p,$2);
							strcat(p,$3);
							$$=p; }
	;

listitem: flow LICL {char *p = (char *)malloc(1+strlen($1)+strlen($2));
							strcat(p,$1);
							strcat(p,$2);
							$$=p; }
	| LICL {$$=$1; }
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