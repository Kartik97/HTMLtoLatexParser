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
%token CLOSE
%token IGNORE
%token ATTRIBUTEVAL

%type <value> ATTRIBUTE STARTTAGOPEN STARTTAGCLOSE TAG ATTRIBUTEVAL CLOSE COMMENT

%%

st: content 
        ;

tag: TAG {i++; printf("\n%s%d\n",$1,i); }
        ;

attributes: attributes STARTTAGCLOSE {i++; printf("\n%s%d\n",$2,i); }
	    | attributes att 
	    | att 
	;

att: ATTRIBUTE {i++; printf("\n%s%d\n",$1,i); }
     | ATTRIBUTE ATTRIBUTEVAL {i++; printf("\n%s %s%d\n",$1,$2,i); }
	;

attTag: STARTTAGOPEN attributes {i++; printf("\n%s%d\n",$1,i); }
	| STARTTAGOPEN STARTTAGCLOSE {i++; printf("\n%s %s%d\n",$1,$2,i); }
	;

end: CLOSE {i++; printf("\n%s%d\n",$1,i); }

comment: COMMENT {i++; printf("\n%s%d\n",$1,i); }
	;

content: content tag
	 | content attTag
	 | content end
	 | content comment
	 | tag
	 | attTag
	 | end
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


