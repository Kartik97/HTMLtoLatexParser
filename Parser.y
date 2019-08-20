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
	const char *object;
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
%token COMMENT 
%token SYMBOL 
%token TEXT
%token ATTRIBUTE
%token IGNORE
%token ATTRIBUTEVAL

%type <value> ATTRIBUTE DOCTYPE HTMLOP HTMLCL HEADOP HEADCL TITLEOP TITLECL TEXT BODYOP BODYCL PHRASEOP PHRASECL BPHRASEOP BPHRASECL
%type <value> GTPHOP GTPHCL

%%

st:	DOCTYPE { printf("%s\n",$1); } 
	| DOCTYPE HTMLOP HTMLCL {printf("%s %s %s\n",$1,$2,$3); }
	| HTMLOP HTMLCL {printf("%s %s\n",$1,$2); }
	| DOCTYPE HTMLOP head HTMLCL {printf("%s %s %s\n",$1,$2,$4); }
	| HTMLOP head HTMLCL {printf("%s %s\n",$1,$3); }
	| DOCTYPE HTMLOP head body HTMLCL {printf("%s %s %s\n",$1,$2,$5); }	
	| HTMLOP head body HTMLCL {printf("%s %s\n",$1,$4); }
	| DOCTYPE HTMLOP body HTMLCL {printf("%s %s %s\n",$1,$2,$4); }
	| HTMLOP body HTMLCL {printf("%s %s\n",$1,$3); }
	;

head:	HEADOP title HEADCL {printf("%s %s\n",$1,$3); } 
	| HEADOP HEADCL {printf("%s %s\n",$1,$2); }
	;

title:	TITLEOP TITLECL {printf("%s %s\n",$1,$2); }
	| TITLEOP text TITLECL {printf("%s %s\n",$1,$3); }
	;

text:	text TEXT { printf("%s",$2); }
	| TEXT { printf("%s",$1); }
	;

body: BODYOP flow BODYCL  {printf("%s %s\n",$1,$3); }
	| BODYOP BODYCL {printf("%s %s",$1,$2); }
	;

flow:   BPHRASEOP  phraseopen{cout<<$1<<" "; }
        | text {}
	;

phraseopen: phrases BPHRASECL flow {cout<<$2<<" "; }
	| BPHRASECL flow {cout<<$1<<" "; }
	| BPHRASECL {cout<<$1<<" "; }
	;

phrases: phrases PHRASEOP phrases PHRASECL {cout<<$2<<" "<<$4; }
	 | phrases PHRASEOP PHRASECL { cout<<$2<<" "<<$3; }
	 | PHRASEOP phrases PHRASECL {cout<<$1<<" "<<$3; }
	 | PHRASEOP PHRASECL { string s1=$1;
				string s2=$2;
				$$=s1+" "+s2; }
	 | text {}
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


