%{
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int i=0;

extern int yylex();
extern void yyerror(const char*);

%}

%name parse
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
%token <value> TABOP TABCL CAPOP CAPCL TROP TRCL THOP THCL TDOP TDCL

%type <value> ATTRIBUTE DOCTYPE HTMLOP HTMLCL HEADOP HEADCL TITLEOP TITLECL TEXT BODYOP BODYCL PHRASEOP PHRASECL BPHRASEOP BPHRASECL
%type <value> ATTRIBUTEVAL AOP AOPOP ACL IMGOP IMGCL LOP LCL LIOP LICL FIGCAPOP FIGCAPCL
%type <value> GTPHOP GTPHCL DIVOP DIVCL FONTOP FONTOOP FONTCL FIGOP FIGCL
%type <value> DLOP DLCL DTOP DTCL DDOP DDCL 
%type <value> head title text body flow phraseopen phrases atag

%%

st:	DOCTYPE { cout<<$1; } 
	| DOCTYPE HTMLOP HTMLCL {cout<<$1<<" "<<$2<<" "<<$3; }
	| HTMLOP HTMLCL { cout<<$1<<" "<<$2; }
	| DOCTYPE HTMLOP head HTMLCL {cout<<$1<<" "<<$2<<" "<<$4; }
	| HTMLOP head HTMLCL {cout<<$1<<" "<<$3; }
	| DOCTYPE HTMLOP head body HTMLCL {cout<<$1<<" "<<$2<<" "<<$5; }	
	| HTMLOP head body HTMLCL {cout<<$1<<" "<<$4; }
	| DOCTYPE HTMLOP body HTMLCL {cout<<$1<<" "<<$2<<" "<<$4; }
	| HTMLOP body HTMLCL {cout<<$1<<" "<<$3; }
	;

head:	HEADOP title HEADCL {
				cout<<$1<<" "<<$3; } 
	| HEADOP HEADCL {
			cout<<$1<<" "<<$2; }
	;

title:	TITLEOP TITLECL { cout<<$1<<" "<<$2; }
	| TITLEOP text TITLECL { cout<<$1<<" "<<$3; }
	;

text:	text TEXT { cout<<$2; }
	| TEXT {cout<<$1<<" "; }
	;

body: BODYOP flow BODYCL  { cout<<$1<<" "<<$3; }
	| BODYOP BODYCL { cout<<$1<<" "<<$2; }
	;

flow:   BPHRASEOP phraseopen { cout<<$1; }
	| GTPHOP gtph {cout<<$1; }
	| AOP atag {cout<<$1; }
	| DIVOP div {cout<<$1; }
	| IMGOP img {cout<<$1; }
	| IMGOP img flow {cout<<$1; }
	| FONTOP fontsub {cout<<$1; }
	| LOP list {cout<<$1; }
	| FIGOP figure {cout<<$1; }
	| DLOP dl {cout<<$1; }
	| TABOP table {cout<<$1; }
        | text {}
	;

table: CAPOP caption TABCL{cout<<$1; }
	| CAPOP caption TROP tr TABCL {cout<<$1<<" "<<$3<<" "<<$5; }
	| TROP tr TABCL {cout<<$1<<" "<<$3; }
	| CAPOP caption TABCL flow {cout<<$1; }
        | CAPOP caption TROP tr TABCL flow {cout<<$1<<" "<<$3<<" "<<$5; }
        | TROP tr TABCL flow {cout<<$1<<" "<<$3; }
	| TABCL {cout<<$1; }
	| TABCL flow {cout<<$1; }
	;

caption: flow CAPCL {cout<<$2; } 
	| CAPCL {cout<<$1; }
	;

tr: TRCL {cout<<$1; }
	| THOP th TRCL {cout<<$1<<" "<<$3; }
	| TDOP td TRCL {cout<<$1<<" "<<$3; }
	| TRCL TROP tr {cout<<$1<<" "<<$2; }
        | THOP th TRCL TROP tr {cout<<$1<<" "<<$3<<" "<<$4; }
        | TDOP td TRCL TROP tr {cout<<$1<<" "<<$3<<" "<<$4; }
	;

th: THCL {cout<<$1; }
	| flow THCL {cout<<$2; } 
	| THCL THOP th {cout<<$1<<" "<<$2; }
	| flow THCL THOP th {cout<<$2<<" "<<$3; }
	;

td: TDCL {cout<<$1; }
        | flow TDCL {cout<<$2; }
        | TDCL TDOP td {cout<<$1<<" "<<$2; }
        | flow TDCL TDOP td {cout<<$2<<" "<<$3; }
        ;

div: DIVCL {cout<<$1; }
	| DIVCL flow {cout<<$1; }
	| flow DIVCL flow {cout<<$2; }
	| flow DIVCL {cout<<$2; }
	;

atag:	ATTRIBUTE ATTRIBUTEVAL AOPOP flow ACL flow {cout<<$1<<" "<<$2<<" "<<$3<<" "<<$5;}
	| AOPOP flow ACL flow {cout<<$1<<" "<<$3; }
	| AOPOP ACL flow {cout<<$1<<" "<<$2<<" "; }
	| ATTRIBUTE ATTRIBUTEVAL AOPOP flow ACL {cout<<$1<<" "<<$2<<" "<<$3<<" "<<$5; }
        | AOPOP flow ACL {cout<<$1<<" "<<$3; }
        | AOPOP ACL {cout<<$1<<" "<<$2; }
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL flow {cout<<$1<<" "<<$2<<" "<<$3<<" "<<$4;}
	| ATTRIBUTE ATTRIBUTEVAL AOPOP ACL {cout<<$1<<" "<<$2<<" "<<$3<<" "<<$4; }
	;

gtph: phrases GTPHCL flow {cout<<$2; }
	| GTPHCL flow {cout<<$1; }
	| phrases GTPHCL {cout<<$2; }
	| GTPHCL {cout<<$1; }
	| BPHRASEOP phraseopen GTPHCL flow {cout<<$1<<" "<<$3; }
	| BPHRASEOP phraseopen GTPHCL {cout<<$1<<" "<<$3; }
	;

phraseopen: phrases BPHRASECL flow {cout<<$2; }
	| BPHRASECL flow { cout<<$1; }
	| BPHRASECL { cout<<$1; }
	| font {} 
	;

phrases: phrases PHRASEOP phrases PHRASECL { cout<<$2<<" "<<$4; }
	 | phrases PHRASEOP PHRASECL { cout<<$2<<" "<<$3; }
	 | PHRASEOP phrases PHRASECL {cout<<$1<<" "<<$3; }
	 | PHRASEOP PHRASECL {cout<<$1<<" "<<$2; }
	 | phrases IMGOP img {cout<<$2; }
	 | phrases font {}
	 | phrases FONTOP font {cout<<$2; }
	 | FONTOP font {cout<<$1; }
	 | font {} 
	 | IMGOP img {cout<<$1; }
	 | text {}
	;

img:  ATTRIBUTE ATTRIBUTEVAL img {cout<<$1<<" "<<$2; }
	| IMGCL {cout<<$1; }
	; 

fontsub: font {}
	| font flow {}
	;

font: ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL {cout<<$1<<" "<<$2<<" "<<$3<<" "<<$4;}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP phrases FONTCL {cout<<$1<<" "<<$2<<" "<<$3<<" "<<$5;}
	| FONTOOP phrases FONTCL {cout<<$1<<" "<<$3; }
	;

list:  LIOP listitem list {cout<<$1; }
	| LCL {cout<<$1; }
	;

listitem: flow LICL {cout<<$2; }
	| LICL {cout<<$1; }
	;

figure: flow FIGCAPOP figcap FIGCL {cout<<$2<<" "<<$4; }
	| FIGCAPOP figcap FIGCL {cout<<$1<<" "<<$3; }
	| FIGCAPOP figcap flow FIGCL {cout<<$1<<" "<<$4; }
	| flow FIGCL {cout<<$2; }
	| FIGCL {cout<<$1; }
	| flow FIGCAPOP figcap FIGCL flow {cout<<$2<<" "<<$4; }
        | FIGCAPOP figcap FIGCL flow {cout<<$1<<" "<<$3; }
	| FIGCAPOP figcap flow FIGCL flow {cout<<$1<<" "<<$4; }
        | flow FIGCL flow {cout<<$2; }
	| FIGCL flow {cout<<$1; }
	;

figcap: flow FIGCAPCL {cout<<$2; }
	| FIGCAPCL {cout<<$1; }
	;

dl: DLCL {cout<<$1; }
	| DIVOP div DLCL {cout<<$1<<" "<<$3; }
	| DTOP dt DLCL {cout<<$1<<" "<<$3};
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


