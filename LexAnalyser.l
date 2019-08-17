%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"

char *findVal(char *s,int len);
char *find(char *s,int len);
char *findclose(char *s,int len);
%}

%option stack
%x aTag
%x aInside
%x fontTag
%x fontInside
%x imgTag
%x imgInside

space [ \t\r\n]
tags "html"|"u"|"b"|"i"|"em"|"tt"|"strong"|"small"|"sub"|"sup"|"table"|"caption"|"th"|"tr"|"td"|"head"|"body"|"title"|"center"|"br"|"p"|"h1"|"h2"|"h3"|"h4"|"ul"|"li"|"ol"|"ul"|"dl"|"dt"|"dd"|"div"|"figure"|"figcaption"
rest "a"|"font"|"img"

%%
"</"{tags}">"|"</"{tags}{space}+[^>]*">"      {
			yylval.value = findclose(yytext,yyleng);
			return CLOSE;
}
"</"{rest}">"|"</"{rest}{space}+[^>]*">"      {
                        yylval.value = findclose(yytext,yyleng);
                        return CLOSE;
}
"<"{tags}">"|"<"{tags}{space}+[^>]*">"        {  
			yylval.value = find(yytext,yyleng);
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
"<font>"           {       yylval.value = "font";
                        return TAG;
                }
"<font"{space}+    { yy_push_state(fontTag);
                yylval.value="font";
                return STARTTAGOPEN;
        }
<fontTag>{
        "size"{space}*[=]*  {
                        yylval.value = "size";
                        yyless(yyleng-1);
                        yy_push_state(fontInside);
                        return ATTRIBUTE;
                }
        {space}*">" { yy_pop_state();
                        yylval.value = "closed";
                        return STARTTAGCLOSE;
                 }
        [^>]    {}
}
<fontInside>{
                [=]{space}*[\"\']{space}*[a-zA-Z0-9@_\\\/\-]*{space}*[\"\']  {
                        yy_pop_state();
                        yylval.value=findVal(yytext,yyleng);
                        return ATTRIBUTEVAL;
                }
                [=]  {  yy_pop_state();
                        yylval.value="";
                        return ATTRIBUTEVAL;
                }
                [^>]  {yy_pop_state(); yyless(yyleng-1); }
}
"<img>"           {       yylval.value = "img";
                        return TAG;
                }
"<img"{space}+    { yy_push_state(imgTag);
                yylval.value="img";
                return STARTTAGOPEN;
        }
<imgTag>{
        "src"{space}*[=]*  {
                        yylval.value = "src";
                        yyless(yyleng-1);
                        yy_push_state(imgInside);
                        return ATTRIBUTE;
                }
	 "width"{space}*[=]*  {
                        yylval.value = "width";
                        yyless(yyleng-1);
                        yy_push_state(imgInside);
                        return ATTRIBUTE;
                }
	 "height"{space}*[=]*  {
                        yylval.value = "height";
                        yyless(yyleng-1);
                        yy_push_state(imgInside);
                        return ATTRIBUTE;
                }
        {space}*">" { yy_pop_state();
                        yylval.value = "closed";
                        return STARTTAGCLOSE;
                 }
        [^>]    {}
}
<imgInside>{
                [=]{space}*[\"\']{space}*[a-zA-Z0-9@_\\\/\-]*{space}*[^\"^\'][\"\']  {
                        yy_pop_state();
                        yylval.value=findVal(yytext,yyleng);
                        return ATTRIBUTEVAL;
                }
                [=]  {  yy_pop_state();
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
	int i=0,k=0;
	for(i=1;i<len;i++){
		new[k++]=s[i];
	}
//	new[k++]='\0';
	return new;
}

char *find(char *s,int len){
	char *new = (char *)malloc(sizeof(char)*len);
	int i=0,k=0;
	for(i=1,k=0;i<len;i++){
		if(s[i]!=32 && s[i]!=62)
			new[k++]=s[i];
		else
			break;
	}
	new[k++]='\0';
	return new;
}
char *findclose(char *s,int len){
        char *new = (char *)malloc(sizeof(char)*len);
        int i=0,k=0;
        for(i=2,k=0;i<len;i++){
                if(s[i]!=32 && s[i]!=62)
                        new[k++]=s[i];
                else
                        break;
        }
        new[k++]='\0';
        return new;
}
