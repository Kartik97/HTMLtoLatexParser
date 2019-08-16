%{
#include<stdio.h>
#include<string.h>
int i=0;
%}

%union{
	char *object;
	char *value;
}
%start st
%token TAG
%token STARTTAGOPEN 
%token STARTTAGCLOSE 
%token ENDTAGOPEN 
%token ENDTAGCLOSE
%token COMMENT 
%token SYMBOL 
%token TEXT
%token ATTRIBUTE
%token TAGCLOSED
%token IGNORE

%type <value> ATTRIBUTE STARTTAGOPEN STARTTAGCLOSE TAG

%%

st: content 
        ;

tag: TAG {i++; printf("%s%d\n",$1,i); }
        ;

attributes: attributes STARTTAGCLOSE {i++; printf("%s%d\n",$2,i); }
	    | attributes ATTRIBUTE {i++; printf("%s%d\n",$2,i); }
	    | ATTRIBUTE {i++; printf("%s%d\n",$1,i); }
	;

attTag: STARTTAGOPEN attributes {i++; printf("%s%d\n",$1,i); }
	;

content: content tag
	 | content attTag
	 | tag
	 | attTag
	; 

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


