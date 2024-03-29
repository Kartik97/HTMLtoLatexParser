%{
#include<stdio.h>
#include<string.h>
int i=0;
%}

%name parse
%union{
	char *object;
	char *value;
}
%start st
%token DOCTYPE
%token HTMLOP
%token HTMLCL
%token TAGOP
%token TAGCL
%token HEADOP
%token HEADCL
%token TITLEOP
%token TITLECL
%token BODYOP
%token BODYCL
%token COMMENT 
%token SYMBOL 
%token TEXT
%token ATTRIBUTE
%token IGNORE
%token ATTRIBUTEVAL

%type <value> ATTRIBUTE DOCTYPE HTMLOP HTMLCL HEADOP HEADCL TITLEOP TITLECL TEXT

%%

st:	DOCTYPE {printf ("%s\n",$1); } 
	| DOCTYPE HTMLOP HTMLCL {printf("%s %s %s\n",$1,$2,$3); }
	| HTMLOP HTMLCL {printf("%s %s\n",$1,$2); }
	| DOCTYPE HTMLOP head HTMLCL {printf("%s %s %s\n",$1,$2,$4); }
	;

head:	HEADOP title HEADCL {printf("%s %s\n",$1,$3); } 
	| HEADOP HEADCL {printf("%s %s\n",$1,$2); }
	;

title:	TITLEOP TITLECL {printf("%s %s\n",$1,$2); }
	| TITLEOP text TITLECL {printf("%s %s\n",$1,$3); }
	;

text:	TEXT {printf("%s\n",$1); }

%%
void yyerror(char *msg){
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


