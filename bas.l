%{
#include <stdio.h>
%}

space [ \t\r]
tags "head"|"body"|"title"|"center"|"br"|"p"|"h1"|"h2"|"h3"|"h4"|"ul"|"li"|"ol"|"ul"|"dl"|"dt"|"dd"|"div"|"u"|"b"|"i"|"em"|"tt"|"strong"|"small"|"sub"|"sup"|"table"|"caption"|"th"|"tr"|"td"

aOpen "<a"{space}*[^>|\n]*{space}*">"
aClose "</a"{space}*[\n]*{space}*">"

fontOpen "<font"{space}*[^>|\n]*{space}*">"
fontClose "</font"{space}*[\n]*{space}*">"

imgOpen "<img"{space}*[^>|\n]*{space}*">"
imgClose "</img"{space}*[\n]*{space}*">"

%%

"<"{tags}{space}*[^>|\n]*{space}*">" {
				int l=1;
				while(l<yyleng){
										
				}
			}
"</"{tags}{space}*[\n]*">" {printf("%s",yytext);}

{aOpen}  {printf("%s",yytext);}
{aClose}  {printf("%s",yytext);}

{fontOpen}  {printf("%s",yytext);}
{fontClose}  {printf("%s",yytext);}

{imgOpen}  {printf("%s",yytext);}
{imgClose}  {printf("%s",yytext);}

[.|\n]

%%
int yywrap(){return 1;}	
int main()
{
	FILE *fp;
	char fn[50];
	scanf("%s",fn);
	fp=fopen(fn,"r");
	yyin=fp;
	yylex();
	fclose(fp);
}
