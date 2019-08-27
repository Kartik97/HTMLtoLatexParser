%{ 
int count = 0; 
%} 
space [ \n\t\r]
word [a-zA-Z\`\~\!\@\#\$\%\^\&\*\(\)\-\_\+\=\{\}\[\]\|\\\:\;\"\'\,\.\/\?]*[^<]

%% 
{word} {
	printf("%d%s\n",count++, yytext); 
	} 
%% 

int yywrap(){} 
int main(){ 

yylex(); 
return 0; 
} 

