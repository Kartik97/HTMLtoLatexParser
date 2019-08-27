%{
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include "Parser.tab.h"

using namespace std;
int phcount=0;
char *findpos(const char* s,int len,int start);
char *findval(const char* s,int len,int start);
%}

%option stack
%x aInside
%x aAtt
%x imgInside
%x imgAtt
%x fontInside
%x fontAtt

space [ \t\r\n]
newline \n
html "html"|"HTML"
head "head"|"HEAD"
title "title"|"TITLE"
body "body"|"BODY"
doctype "!doctype"|"!DOCTYPE"
special "&"[a-zA-Z]+";"
phrasingtags "b"|"B"|"em"|"EM"|"i"|"I"|"small"|"SMALL"|"strong"|"STRONG"|"sub"|"SUB"|"sup"|"SUP"|"u"|"U"|"tt"|"TT"
gtph "p"|"P"|"h1"|"H1"|"h2"|"H2"|"h3"|"H4"|"h5"|"H5"
a "a"|"A"
div "div"|"DIV"|"center"|"CENTER"
img "img"|"IMG"
font "font"|"FONT"
li "li"|"LI"
ul "ul"|"UL"
ol "ol"|"OL"
figure "figure"|"FIGURE"
figcaption "figcaption"|"FIGCAPTION"
dl "dl"|"DL"
dt "dt"|"DT"
dd "dd"|"DD"
table "table"|"TABLE"
caption "caption"|"CAPTION"
tr "tr"|"TR"
th "th"|"TH"
td "td"|"TD"
br "br"|"BR"
comm "-->"
word \b[^{space}<]+\b
symbol1 "alpha"|"beta"|"chi"|"delta"|"epsilon"|"eta"|"gamma"|"iota"|"kappa"|"lambda"|"mu"|"nu"|"omega"|"phi"|"pi"|"psi"|"rho"|"sigma"|"tau"
symbol2 "theta"|"xi"|"zeta"|"Delta"|"Gamma"|"Lambda"|"Omega"|"Phi"|"Pi"|"Psi"|"Sigma"|"Theta"|"lt"|"gt"|"nbsp"|"quot"|"apos"|"cent"|"pound"|"yen"|"euro"|"copy"|"reg"

%%
{space}+ {}
"<!--"[^>]*"-->"  {
        yylval.value=strdup(yytext);
        return COMMENT;
}
"&"{symbol1}";"|"&"{symbol2}";" {
        yylval.value = strdup(findpos(yytext,yyleng,1));
        return SYMBOL;
}

{word}  {
        ECHO;
        cout<<endl;
}
"<"{doctype}{space}+[^{html}]*{html}">"|"<"{doctype}{space}+[^{html}]*{html}{space}+[^>]*">" {
	yylval.value = strdup("DOCTYPE ");
	return DOCTYPE;
}
"<"{html}{space}+[^>]*">"|"<"{html}">"  {
	yylval.value=strdup("HTMLOP ");
	return HTMLOP;
}
"</"{html}{space}+[^>]*">"|"</"{html}">"  {
	yylval.value=strdup("HTMLCL ");
	return HTMLCL;
}
"<"{head}{space}+[^>]*">"|"<"{head}">"  {
        yylval.value=strdup("HEADOP ");
        return HEADOP;
}
"</"{head}{space}+[^>]*">"|"</"{head}">"  {
        yylval.value=strdup("HEADCL ");
        return HEADCL;
}
"<"{title}{space}+[^>]*">"|"<"{title}">"  {
        yylval.value=strdup("TITLEOP ");
        return TITLEOP;
}
"</"{title}{space}+[^>]*">"|"</"{title}">"  {
        yylval.value=strdup("TITLECL ");
        return TITLECL;
}
"<"{body}{space}+[^>]*">"|"<"{body}">"  {
        yylval.value=strdup("BODYOP ");
        return BODYOP;
}
"</"{body}{space}+[^>]*">"|"</"{body}">"  {
        yylval.value=strdup("BODYCL ");
        return BODYCL;
}
"<"{div}{space}+[^>]*">"|"<"{div}">"  {
        yylval.value=strdup(findpos(yytext,yyleng,1));
        return DIVOP;
}
"</"{div}{space}+[^>]*">"|"</"{div}">"  {
        yylval.value=strdup(findpos(yytext,yyleng,2));
        return DIVCL;
}
"<"{phrasingtags}{space}+[^>]*">"|"<"{phrasingtags}">"  {
        yylval.value=strdup(findpos(yytext,yyleng,1));
	phcount++;
	if(phcount==1){
		return BPHRASEOP;
	}
	else{
		return PHRASEOP;
	}
}
"</"{phrasingtags}{space}+[^>]*">"|"</"{phrasingtags}">"  {
	yylval.value=strdup(findpos(yytext,yyleng,2));
	phcount--;
	if(phcount==0)
		return BPHRASECL;
	else
		return PHRASECL;
}
"<"{gtph}{space}+[^>]*">"|"<"{gtph}">"  {
        yylval.value=strdup(findpos(yytext,yyleng,1));
        return GTPHOP;
}
"</"{gtph}{space}+[^>]*">"|"</"{gtph}">"  {
        yylval.value=strdup(findpos(yytext,yyleng,2));
        return GTPHCL;
}
"<"{a}{space}+|"<"{a} {
	yy_push_state(aInside);
	yylval.value=strdup("AOP ");
	return AOP;
}
"</"{a}{space}+[^>]*">"|"</"{a}">" {
	yylval.value=strdup("ACL ");
	return ACL;
}
<aInside>{
	"href"{space}+[^=]*"="|"href=" {
		yy_push_state(aAtt);
		yylval.value=strdup("HREF ");
		yyless(yyleng-1);
		return ATTRIBUTE;
	}
	[^"href">]*">" {
		yy_pop_state();
		yylval.value=strdup("AOPOP ");
		return AOPOP;
	}
	. {}
}
<aAtt>{
	[=]{space}*[\"\'][a-zA-Z:\/@0-9~.$%&()]*[\"\'] {
		yy_pop_state();
		yylval.value=strdup(findval(yytext,yyleng,1));
		return ATTRIBUTEVAL;
	}
}
"<"{img}{space}+|"<"{img} {
	yy_push_state(imgInside);
	yylval.value=strdup("IMGOP ");
	return IMGOP;
}
<imgInside>{
	"src"{space}+[^=]*"="|"src=" {
                yy_push_state(imgAtt);
                yylval.value=strdup("SRC ");
                yyless(yyleng-1);
                return ATTRIBUTE;
        }
	"width"{space}+[^=]*"="|"width=" {
                yy_push_state(imgAtt);
                yylval.value=strdup("WIDTH ");
                yyless(yyleng-1);
                return ATTRIBUTE;
        }
	"height"{space}+[^=]*"="|"height=" {
                yy_push_state(imgAtt);
                yylval.value=strdup("HEIGHT ");
                yyless(yyleng-1);
                return ATTRIBUTE;
        }
        [^"src""width""height">]*[">""\>"] {
                yy_pop_state();
                yylval.value=strdup("IMGCL ");
                return IMGCL;
        }
        . {}
}
<imgAtt>{
	 [=]{space}*[\"\'][a-zA-Z:\/@0-9~.$%&()]*[\"\'] {
                yy_pop_state();
                yylval.value=strdup(findval(yytext,yyleng,1));
                return ATTRIBUTEVAL;
        }
}
"<"{font}{space}+|"<"{font} {
        yy_push_state(fontInside);
	yylval.value=strdup("FONTOP ");	
	return FONTOP;
}
"</"{font}{space}+[^>]*">"|"</"{font}">" {
	yylval.value=strdup("FONTCL ");	
	return FONTCL;
}
<fontInside>{
        "size"{space}+[^=]*"="|"size=" {
                yy_push_state(fontAtt);
                yylval.value=strdup("SIZE ");
                yyless(yyleng-1);
                return ATTRIBUTE;
        }
        [^"size">]*">" {
                yy_pop_state();
                yylval.value=strdup("FONTOOP ");
                return FONTOOP;
        }
        . {}
}
<fontAtt>{
        [=]{space}*[\"\'][a-zA-Z:\/@0-9~.$%&()]*[\"\'] {
                yy_pop_state();
                yylval.value=strdup(findval(yytext,yyleng,1));
                return ATTRIBUTEVAL;
        }
}
"<"{ul}{space}+[^>]*">"|"<"{ul}">"  {
        yylval.value=strdup("ULOP ");
        return LOP;
}
"</"{ul}{space}+[^>]*">"|"</"{ul}">"  {
        yylval.value=strdup("ULCL ");
        return LCL;
}
"<"{ol}{space}+[^>]*">"|"<"{ol}">"  {
        yylval.value=strdup("OLOP ");
        return LOP;
}
"</"{ol}{space}+[^>]*">"|"</"{ol}">"  {
        yylval.value=strdup("OLCL ");
        return LCL;
}
"<"{li}{space}+[^>]*">"|"<"{li}">"  {
        yylval.value=strdup("LIOP ");
        return LIOP;
}
"</"{li}{space}+[^>]*">"|"</"{li}">"  {
        yylval.value=strdup("LICL ");
        return LICL;
}
"<"{figure}{space}+[^>]*">"|"<"{figure}">"  {
        yylval.value=strdup("FIGUREOP ");
        return FIGOP;
}
"</"{figure}{space}+[^>]*">"|"</"{figure}">"  {
        yylval.value=strdup("FIGURECL ");
        return FIGCL;
}
"<"{figcaption}{space}+[^>]*">"|"<"{figcaption}">"  {
        yylval.value=strdup("FIGCAPTIONOP ");
        return FIGCAPOP;
}
"</"{figcaption}{space}+[^>]*">"|"</"{figcaption}">"  {
	yylval.value=strdup("FIGCAPTIONCL ");
        return FIGCAPCL;
}
"<"{dl}{space}+[^>]*">"|"<"{dl}">"  {
        yylval.value=strdup("DLOP ");
        return DLOP;
}
"</"{dl}{space}+[^>]*">"|"</"{dl}">"  {
        yylval.value=strdup("DLCL ");
        return DLCL;
}
"<"{dt}{space}+[^>]*">"|"<"{dt}">"  {
        yylval.value=strdup("DTOP ");
        return DTOP;
}
"</"{dt}{space}+[^>]*">"|"</"{dt}">"  {
        yylval.value=strdup("DTCL ");
        return DTCL;
}
"<"{dd}{space}+[^>]*">"|"<"{dd}">"  {
        yylval.value=strdup("DDOP ");
        return DDOP;
}
"</"{dd}{space}+[^>]*">"|"</"{dd}">"  {
        yylval.value=strdup("DDCL ");
        return DDCL;
}
"<"{table}{space}+[^>]*">"|"<"{table}">"  {
        yylval.value=strdup("TABLEOP ");
        return TABOP;
}
"</"{table}{space}+[^>]*">"|"</"{table}">"  {
        yylval.value=strdup("TABLECL ");
        return TABCL;
}
"<"{caption}{space}+[^>]*">"|"<"{caption}">"  {
        yylval.value=strdup("CAPOP ");
        return CAPOP;
}
"</"{caption}{space}+[^>]*">"|"</"{caption}">"  {
        yylval.value=strdup("CAPCL ");
        return CAPCL;
}
"<"{tr}{space}+[^>]*">"|"<"{tr}">"  {
        yylval.value=strdup("TROP ");
        return TROP;
}
"</"{tr}{space}+[^>]*">"|"</"{tr}">"  {
        yylval.value=strdup("TRCL ");
        return TRCL;
}
"<"{th}{space}+[^>]*">"|"<"{th}">"  {
        yylval.value=strdup("THOP ");
        return THOP;
}
"</"{th}{space}+[^>]*">"|"</"{th}">"  {
        yylval.value=strdup("THCL ");
        return THCL;
}
"<"{td}{space}+[^>]*">"|"<"{td}">"  {
        yylval.value=strdup("TDOP ");
        return TDOP;
}
"</"{td}{space}+[^>]*">"|"</"{td}">"  {
        yylval.value=strdup("TDCL ");
        return TDCL;
}
"<"{br}{space}+[^>]*">"|"<"{br}">"  {
        yylval.value=strdup("BR ");
        return BR;
}

%%

int yywrap(){
	return 1;
}
char *findpos(const char *s,int len,int start){
	int i=start,k=0;
	char *p=(char *)malloc(sizeof(char)*100);
	for(;i<len;i++){
		if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57))
			p[k++]=(s[i]);
		else break;
	}
        if(start==2){
                p[k++]='C';
        }
	p[k]=0;
	return p;
}
char *findval(const char *s,int len,int start){
        int i=start,k=0,flag=0;
        char *p=(char *)malloc(sizeof(char)*len);
        for(;i<len;i++){
		if(flag==1)
			p[k++]=s[i];
		if(flag==1 && (s[i]==34 || s[i]==39))
			break;
		if(flag==0 && (s[i]==34 || s[i]==39))
			flag=1;
        }
        p[k-1]=0;
        return p;
}