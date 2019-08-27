%{ 
int count = 0; 
%} 
space [ \n\t\r]
word [a-zA-Z\`\~\!\@\#\$\%\^\&\*\(\)\-\_\+\=\{\}\[\]\|\\\:\;\"\'\,\.\/\?]*[^<]

%% 
"<!--"(.*?)"-->"  {
	printf("%d%s\n",count++, yytext); 
	}
{word} {
	printf("wrod");
} 
%% 

int yywrap(){} 
int main(){ 

yylex(); 
return 0; 
} 

