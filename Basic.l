%{
#include <stdio.h>
#include <string.h>
char *findTag(char *s,int len);
%}
%option stack
%x imgAttVal

space [ \t\r]
tags "head"|"body"|"title"|"center"|"br"|"p"|"h1"|"h2"|"h3"|"h4"|"ul"|"li"|"ol"|"ul"|"dl"|"dt"|"dd"|"div"|"u"|"b"|"i"|"em"|"tt"|"strong"|"small"|"sub"|"sup"|"table"|"caption"|"th"|"tr"|"td"

aOpen "<a"{space}*
aClose "</a"{space}*[\n]*">"

fontOpen "<font"{space}*
fontClose "</font"{space}*[\n]*">"

imgOpen "<img"{space}*
imgClose "</img"{space}*[\n]*">"

%%

<imgAttVal>{space}*"src"{space}*"=" {printf("%s\n",yytext);yy_pop_state();}
{imgOpen}  {	yy_push_state(imgAttVal);
		yytext=yytext+1;
		printf("%s",yytext);
}
{imgClose} {printf("%s",yytext+2);}

.
 
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
char *findTag(char *s,int len){
	int l=0;
        char *tag = (char *)malloc(sizeof(char)*10);
        while(l<len){
                if(s[l] == ' ' || s[l]=='>')
	                break;
                *(tag+l)=s[l];
	        l++;
        }
        *(tag+l)=0;
        return tag;
}
