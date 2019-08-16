%{
#include<stdio.h>
#include<string.h>

%}

%start st
%token HTML

%%

st: HTML {printf("html"); }
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


