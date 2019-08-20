%{ 
int count = 0; 
%} 

%% 
. {
	printf("%d%s",count++, yytext); 
	} 
%% 

int yywrap(){} 
int main(){ 

yylex(); 
return 0; 
} 

