%{ 
int count = 0; 
%} 
space [ \n\t\r]
word [a-zA-Z\`\~\!\@\#\$\%\^\&\*\(\)\-\_\+\=\{\}\[\]\|\\\:\;\"\'\,\.\/\?]*[^<]
close "-->"
phrasingtags "p"
html "html"|"HTML"
doctype "!doctype"|"!DOCTYPE"
body "body"|"BODY"
commclose "-->"

%% 
"<!--"[^(\-\-\>)]*"-->"  {
	printf("%d%s\n",count++, yytext); 
	}
"<"{doctype}{space}+[^{html}]*{html}">"|"<"{doctype}{space}+[^{html}]*{html}{space}+[^>]*">" {
	printf("%d%s\n",count++, yytext); 
}
"<"{html}{space}+[^>]*">"|"<"{html}">"  {
	printf("%d%s\n",count++, yytext); 
}
"</"{html}{space}+[^>]*">"|"</"{html}">"  {
	printf("%d%s\n",count++, yytext); 
}
"<"{body}{space}+[^>]*">"|"<"{body}">"  {
        printf("%d%s\n",count++, yytext); 
}
"</"{body}{space}+[^>]*">"|"</"{body}">"  {
        printf("%d%s\n",count++, yytext); 
}
"<"{phrasingtags}{space}+[^>]*">"|"<"{phrasingtags}">"  {
        printf("%d%s\n",count++, yytext); 
}
"</"{phrasingtags}{space}+[^>]*">"|"</"{phrasingtags}">"  {
	printf("%d%s\n",count++, yytext); 
}
%% 

int yywrap(){} 
int main(){ 

yylex(); 
return 0; 
} 

