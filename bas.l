%{
#include <stdio.h>
#include <string.h>
char *findTag(char *s,int len);
%}

%option stack yylineno 
%x aAttVal
%x fontAttVal
%x imgAttVal

space [ \t\r]
tags "head"|"body"|"title"|"center"|"br"|"p"|"h1"|"h2"|"h3"|"h4"|"ul"|"li"|"ol"|"ul"|"dl"|"dt"|"dd"|"div"|"u"|"b"|"i"|"em"|"tt"|"strong"|"small"|"sub"|"sup"|"table"|"caption"|"th"|"tr"|"td"

aOpen "<a"{space}*
aClose "</a"{space}*[\n]*">"

fontOpen "<font"{space}*
fontClose "</font"({space}+[\n]*">"|">")

imgOpen "<img"
imgClose "</img"({space}+[\n]*">"|">")

%%

<imgAttVal>{
	{space}+"src"{space}*[=]  { yyless(yyleng-1);
				printf("%s\n",yytext);
	}
	{space}+"width"{space}*[=]  {yyless(yyleng-1);  printf("%s\n",yytext); }
	{space}+"height"{space}*[=]  {yyless(yyleng-1);  printf("%s\n",yytext); }
	{space}+"figure"{space}*[=]  {yyless(yyleng-1);  printf("%s\n",yytext); }
	{space}+"figcaption"{space}*[=]  {yyless(yyleng-1);  printf("%s\n",yytext); }
	[=]{space}*[\"\'][a-zA-Z0-9_\-$\~\.]*{space}*[\'\"] { printf("%s\n",yytext+1);}
        {space}*">" { yy_pop_state(); }
        .
}

<aAttVal>{
        {space}+"href"{space}*[=] {
                                yyless(yyleng-1);
                                printf("%s\n",yytext);
                        }
	[=]{space}*[\"\'][a-zA-Z0-9_\-$\~\.]*{space}*[\'\"] { printf("%s\n",yytext+1);}
        {space}*">" { yy_pop_state(); }
        .

}
<fontAttVal>{
	{space}+"size"{space}*[=]   {      yyless(yyleng-1);
				printf("%s\n",yytext);
			}
	[=]{space}*[\"\'][a-zA-Z0-9_\-$\~\.]*{space}*[\'\"]   {printf("%s\n",yytext+1); }
	{space}*">"   { yy_pop_state(); }
	.
}


"<"{tags}({space}+[^>|\n]*">"|">")              { printf("%s",findTag(yytext+1,yyleng-1));}
"</"{tags}({space}+[\n]*">"|">")                { printf("%s",findTag(yytext+2,yyleng-2));}

{aOpen}                                   { yy_push_state(aAttVal);printf("%s",yytext+1);}
{aClose}                                  {printf("%s",findTag(yytext+2,yyleng-2));}

{fontOpen}                                {yy_push_state(fontAttVal); printf("%s",yytext+1);}
{fontClose}                               {printf("%s",findTag(yytext+2,yyleng-2));}

{imgOpen}                                 { yy_push_state(imgAttVal);  printf("%s\n",yytext+1); }
{imgClose}                                { printf("%s\n",findTag(yytext+2,yyleng-2));  } 
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
