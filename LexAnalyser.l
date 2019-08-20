%{
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include "Parser.tab.h"

using namespace std;
int phcount=0;
char *findpos(const char* s,int len,int start);
%}

space [ \t\r\n]
newline \n
html "html"|"HTML"
head "head"|"HEAD"
title "title"|"TITLE"
body "body"|"BODY"
doctype "!doctype"|"!DOCTYPE"
special "&"[a-zA-Z]+";"
phrasingtags "b"|"B"|"em"|"EM"|"i"|"I"|"small"|"SMALL"|"strong"|"STRONG"|"sub"|"SUB"|"sup"|"SUP"|"u"|"U"
gtph "p"|"P"|"h1"|"H1"|"h2"|"H2"|"h3"|"H4"|"h5"|"H5"

%%
[a-zA-Z0-9`~!@#$%^&*()-_=+;:'",.?//] {
	if(yytext != "\n")
	{	yylval.value = yytext;
		return TEXT;
	}
}
"<"{doctype}{space}+[^{html}]*{html}">"|"<"{doctype}{space}+[^{html}]*{html}{space}+[^>]*">" {
	yylval.value = "DOCTYPE";
	return DOCTYPE;
}
"<"{html}{space}+[^>]*">"|"<"{html}">"  {
	yylval.value="HTMLOP";
	return HTMLOP;
}
"</"{html}{space}+[^>]*">"|"</"{html}">"  {
	yylval.value="HTMLCL";
	return HTMLCL;
}
"<"{head}{space}+[^>]*">"|"<"{head}">"  {
        yylval.value="HEADOP";
        return HEADOP;
}
"</"{head}{space}+[^>]*">"|"</"{head}">"  {
        yylval.value="HEADCL";
        return HEADCL;
}
"<"{title}{space}+[^>]*">"|"<"{title}">"  {
        yylval.value="TITLEOP";
        return TITLEOP;
}
"</"{title}{space}+[^>]*">"|"</"{title}">"  {
        yylval.value="TITLECL";
        return TITLECL;
}
"<"{body}{space}+[^>]*">"|"<"{body}">"  {
        yylval.value="BODYOP";
        return BODYOP;
}
"</"{body}{space}+[^>]*">"|"</"{body}">"  {
        yylval.value="BODYCL";
        return BODYCL;
}
"<"{phrasingtags}{space}+[^>]*">"|"<"{phrasingtags}">"  {
        yylval.value=findpos(yytext,yyleng,1);
	phcount++;
	if(phcount==1){
		return BPHRASEOP;
	}
	else{
		return PHRASEOP;
	}
}
"</"{phrasingtags}{space}+[^>]*">"|"</"{phrasingtags}">"  {
	yylval.value=findpos(yytext,yyleng,2);
	phcount--;
	if(phcount==0)
		return BPHRASECL;
	else
		return PHRASECL;
}


%%

int yywrap(){
	return 1;
}
char *findpos(const char *s,int len,int start){
	int i=start,k=0;
	char *p=(char *)malloc(sizeof(char)*6);
	for(;i<len;i++){
		if(s[i]==32 || s[i]==62)
			break;
		p[k++]=toupper(s[i]);
	}
	p[k]=0;
	return p;
}
