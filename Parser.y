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
	const char *value;
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

%type <value> ATTRIBUTE DOCTYPE HTMLOP HTMLCL HEADOP HEADCL TITLEOP TITLECL TEXT BODYOP BODYCL PHRASEOP PHRASECL BPHRASEOP BPHRASECL
%type <value> ATTRIBUTEVAL AOP AOPOP ACL IMGOP IMGCL LOP LCL LIOP LICL
%type <value> GTPHOP GTPHCL DIVOP DIVCL FONTOP FONTOOP FONTCL
%type <value> head title text body flow phraseopen phrases atag

%%

st:	DOCTYPE { cout<<$1; } 
	| DOCTYPE HTMLOP HTMLCL {
				cout<<$1<<" "<<$2<<" "<<$3; }
	| HTMLOP HTMLCL { cout<<$1<<" "<<$2; }
	| DOCTYPE HTMLOP head HTMLCL { 
				       cout<<$1<<" "<<$2<<" "<<$4; }
	| HTMLOP head HTMLCL { 
				cout<<$1<<" "<<$3; }
	| DOCTYPE HTMLOP head body HTMLCL {
					cout<<$1<<" "<<$2<<" "<<$5; }	
	| HTMLOP head body HTMLCL {
				 cout<<$1<<" "<<$4; }
	| DOCTYPE HTMLOP body HTMLCL {
				cout<<$1<<" "<<$2<<" "<<$4; }
	| HTMLOP body HTMLCL {
				cout<<$1<<" "<<$3; }
	;

head:	HEADOP title HEADCL {
				cout<<$1<<" "<<$3; } 
	| HEADOP HEADCL { cout<<$1<<" "<<$2; }
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
	| FONTOP font {cout<<$1; }
	| LOP list {cout<<$1; }
        | text {}
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

font: ATTRIBUTE ATTRIBUTEVAL FONTOOP FONTCL {cout<<$1<<" "<<$2<<" "<<$3<<" "<<$4;}
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP phrases FONTCL {cout<<$1<<" "<<$2<<" "<<$3<<" "<<$5;}
	| FONTOOP phrases FONTCL {cout<<$1<<" "<<$3; }
	| ATTRIBUTE ATTRIBUTEVAL FONTOOP BPHRASECL {cout<<$1<<" "<<$2<<" "<<$3<<" "<<$4; } 
        | ATTRIBUTE ATTRIBUTEVAL FONTOOP phrases BPHRASECL {cout<<$1<<" "<<$2<<" "<<$3<<" "<<$5; }  
        | FONTOOP phrases BPHRASECL {cout<<$1<<" "<<$3; }
	;

list:  LIOP listitem list {cout<<$1; }
	| LCL {cout<<$1; }
	;

listitem: flow LICL {cout<<$2; }
	| LICL {cout<<$1; }

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


