%{ 
int count = 0; 
int cut(char *s,int len);
%} 
space [ \n\t\r]
word [a-zA-Z\`\~\!\@\#\$\%\^\&\*\(\)\-\_\+\=\{\}\[\]\|\\\:\;\"\'\,\.\/\?]*[^<]
close (\-\-\>)
%% 
"<!--"((.|\n)*?)?"-->"  {
	if(cut(yytext,yyleng)+1==yyleng){
	}
	else
		yyless(cut(yytext,yyleng)+1);
	printf("%d %d %d\n",count++,cut(yytext,yyleng),yyleng);
}

%% 

int yywrap(){} 
int main(){ 

yylex(); 
return 0; 
} 

int cut(char *s,int len){
	int i=0;
	for(;i<len-2;i++){
		if(s[i]==45 && s[i+1]==45 && s[i+2]==62)
			return i+2;
	}
}