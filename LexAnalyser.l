%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"

char *findVal(char *s,int len);
%}
%option stack
%x aTag
%x aInside

space [ \t\r\n]

%%
"<html>"|"<html"{space}+[^>]*">"        {  
			yylval.value = "html";
			return TAG;
		}
"<body>"|"<body"{space}+[^>]*">"	{
			yylval.value = "body";
			return TAG;
		}
"<title>"|"<title"{space}+[^>]*">"	{
			yylval.value = "title";
			return TAG;
		}
"<a>"		{	yylval.value = "a";
			return TAG;
		}
"<a"{space}+	{ yy_push_state(aTag);
		yylval.value="a";
		return STARTTAGOPEN;
	}
<aTag>{
	"href"{space}*[=]*  {
			yylval.value = "href";
			yyless(yyleng-1);
			yy_push_state(aInside);
			return ATTRIBUTE;
		}
	{space}*">" { yy_pop_state(); 
			yylval.value = "closed"; 
			return STARTTAGCLOSE;
		 }	 
	[^>]    {} 
}
<aInside>{
                [=]{space}*[\"\']{space}*[a-zA-Z0-9@_\\\/\-]*{space}*[\"\']  {
                        yy_pop_state();
                        yylval.value=findVal(yytext,yyleng);
                        return ATTRIBUTEVAL;
                }
		[=]  {	yy_pop_state();
			yylval.value="";
			return ATTRIBUTEVAL;
		}
		[^>]  {yy_pop_state(); yyless(yyleng-1); }
        }
[^<]  {}

%%
int yywrap(){
	return 1;
}

char *findVal(char *s,int len){
	char *new = (char *)malloc(sizeof(char)*len);
	int i=0;
	for(i=1;i<len;i++){
		new[i-1]=s[i];
	}
	return new;
}
