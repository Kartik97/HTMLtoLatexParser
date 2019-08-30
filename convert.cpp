#include <bits/stdc++.h>
#include "convert.h"
using namespace std;

map<string,pair<string,string>> convertTag;
void define_mapping(){
	convertTag["DOCTYPE HTML"]=make_pair("","");
	convertTag["HTML"]=make_pair("","");
	convertTag["HEAD"]=make_pair("","");
	convertTag["TITLE"]=make_pair("\\title{","}");
	convertTag["BODY"]=make_pair("\\begin{document}","\\end{document}");
	convertTag["DIV"]=make_pair("\\\\","\\\\");
	convertTag["B"]=make_pair("\\textbf{","}");
	convertTag["EM"]=make_pair("\\emph{","}");
	convertTag["I"]=make_pair("\\textit{","}");
	convertTag["SMALL"]=make_pair("\\small","\\normalsize");
	convertTag["STRONG"]=make_pair("\\textbf{","}");
	convertTag["SUB"]=make_pair("\\(_{","}\\)");
	convertTag["SUP"]=make_pair("\\(^{","}\\)");
	convertTag["U"]=make_pair("\\underline{","}");
	convertTag["TT"]=make_pair("\\texttt{","}");
	convertTag["P"]=make_pair("\\\\","\\\\");
	convertTag["H1"]=make_pair("\\Huge \\textbf{","} \\normalsize");
	convertTag["H2"]=make_pair("\\huge \\textbf{","} \\normalsize");
	convertTag["H3"]=make_pair("\\LARGE \\textbf{","} \\normalsize");
	convertTag["H4"]=make_pair("\\Large \\textbf{","} \\normalsize");
	convertTag["H5"]=make_pair("\\large \\textbf{","} \\normalsize");
	convertTag["A"]=make_pair("{","}");
	convertTag["HREF"]=make_pair("\\href{","}");
	convertTag["IMG"]=make_pair("\\includegraphics[","]");
	convertTag["SRC"]=make_pair("{","}");
	convertTag["HEIGHT"]=make_pair("height=","pt");
	convertTag["WIDTH"]=make_pair("width=","pt");
	convertTag["FONT"]=make_pair("\\fontsize{","\\normalsize");                           //10 pt normal
	convertTag["SIZE"]=make_pair("pt}{12pt}\\selectfont","");
	convertTag["CENTER"]=make_pair("\\begin{center}","\\end{center}");
	convertTag["BR"]=make_pair("\n","");
	convertTag["OL"]=make_pair("\\begin{enumerate}","\\end{enumerate}");
	convertTag["UL"]=make_pair("\\begin{itemize}","\\end{itemize}");
	convertTag["LI"]=make_pair("\\item","");
	convertTag["DL"]=make_pair("\\begin{description}","\\end{description}");
	convertTag["DT"]=make_pair("\\item[","]");
	convertTag["DD"]=make_pair("","");
	convertTag["FIGURE"]=make_pair("\\begin{figure}","\\end{figure}");
	convertTag["FIGURECAPTION"]=make_pair("\\caption{","}");

	convertTag["TABLE"]=make_pair("\\begin{table}[!ht]","\\end{end}");
	convertTag["CAP"]=make_pair("\\caption{","}");
	convertTag["_TABLE"]=make_pair("\\begin{tabular}","\\end{tabular}");
	convertTag["TR"]=make_pair("","\\\\");
	convertTag["TD"]=make_pair("","");
	convertTag["TH"]=make_pair("","");

	convertTag["alpha"]=make_pair("\\alpha","");
	convertTag["beta"]=make_pair("\\beta","");
	convertTag["chi"]=make_pair("\\chi","");
	convertTag["delta"]=make_pair("\\delta","");
	convertTag["epsilon"]=make_pair("\\epsilon","");
	convertTag["eta"]=make_pair("\\eta","");
	convertTag["gamma"]=make_pair("\\gamma","");
	convertTag["iota"]=make_pair("\\iota","");
	convertTag["kappa"]=make_pair("\\kappa","");
	convertTag["lambda"]=make_pair("\\lambda","");
	convertTag["mu"]=make_pair("\\mu","");
	convertTag["nu"]=make_pair("\\nu","");
	convertTag["omega"]=make_pair("\\omega","");
	convertTag["phi"]=make_pair("\\phi","");
	convertTag["pi"]=make_pair("\\pi","");
	convertTag["psi"]=make_pair("\\psi","");
	convertTag["rho"]=make_pair("\\rho","");
	convertTag["sigma"]=make_pair("\\sigma","");
	convertTag["tau"]=make_pair("\\tau","");
	convertTag["theta"]=make_pair("\\theta","");
	convertTag["xi"]=make_pair("\\xi","");
	convertTag["zeta"]=make_pair("\\zeta","");
	convertTag["Delta"]=make_pair("\\Delta","");
	convertTag["Gamma"]=make_pair("\\Gamma","");
	convertTag["Lambda"]=make_pair("\\Lambda","");
	convertTag["Omega"]=make_pair("\\Omega","");
	convertTag["Phi"]=make_pair("\\Phi","");
	convertTag["Pi"]=make_pair("\\Pi","");
	convertTag["Psi"]=make_pair("\\Psi","");
	convertTag["Sigma"]=make_pair("\\Sigma","");
	convertTag["Theta"]=make_pair("\\Theta","");
	convertTag["lt"]=make_pair("<","");
	convertTag["gt"]=make_pair("gt","");
	convertTag["nbsp"]=make_pair("    ","");
	convertTag["quot"]=make_pair("\"","");
	convertTag["apos"]=make_pair("\'","");
	convertTag["COMMENT"]=make_pair("\\begin{comment}","\\end{comment}");
}

lexNode* add_lexNode(string type,string value){
	lexNode* node=new lexNode;
	node->type=type;
	node->value=value;
	return node;
}

lexNode* add_lexNode(string type){
	lexNode* node=new lexNode;
	node->type=type;
	return node;
}

lexNode* add_lexChild(lexNode *root,string t,string v){
	root->children.push_back(add_lexNode(t,v));
	return root;
}

lexNode* add_lexChild(lexNode *root,string t){
	root->children.push_back(add_lexNode(t));
	return root;
}

lexNode* add_lexChild(lexNode *root,lexNode *node){
	root->children.push_back(node);
	return root;
}

lexNode* root_init(){
	lexNode *root=add_lexNode("ROOT");
	add_lexChild(root,"PREAMBLE","\\documentclass{article}\n\\usepackage{hyperref}\n\\usepackage{graphicx}\n\\usepackage{verbatim}\n\\hypersetup{colorlinks=true}");
	return root;
}

void printLex(lexNode *root){
	if(!root){
		cout<<"LEX ROOT ERROR";
		exit(0);
	}
	cout<<"["<<root->type<<"] :"<<endl;
	if(!root->value.empty()){
		cout<<root->value;
	}
	cout<<"{ ";
	if(!root->children.empty()){
		for(int i=0;i<root->children.size();i++){
			printLex(root->children[i]);
		}
	}
	cout<<" }"<<endl;
}

lexNode* convert(lexNode *root,treeNode *node){
	if(node->tagVal=="A" && node->att.size()>0){
		if(node->att[0]=="HREF")
			add_lexChild(root,"A",convertTag["HREF"].first+node->attVal[0]+convertTag["HREF"].second+convertTag["A"].first);	
	}
	else if(node->tagVal=="IMG" && node->att.size()>0){
		string child=convertTag["IMG"].first;
		int pos=find(node->att.begin(),node->att.end(),"HEIGHT")-node->att.begin(),flag=0;
		if(pos<node->att.size()){
			child=child+"="+node->attVal[pos]+"pt";
			flag=1;
		}
		pos=find(node->att.begin(),node->att.end(),"WIDTH")-node->att.begin();
		if(pos<node->att.size()){
			if(flag==1)
				child+=",";
			child=child+"="+node->attVal[pos]+"pt";
			flag=1;
		}
		child+="]{";
		pos=pos=find(node->att.begin(),node->att.end(),"SRC")-node->att.begin();
		if(pos<node->att.size()){
			child=child+node->attVal[pos];
		}
		child+="}";
		add_lexChild(root,"IMG",child);
	}
	else if(node->tagVal=="FONT" && node->att.size()>0){
		if(node->att[0]=="SIZE")
			add_lexChild(root,"FONT",convertTag["FONT"].first+node->attVal[0]+convertTag["SIZE"].first);	
		else 
			add_lexChild(root,"FONT",convertTag["FONT"].first+"10"+convertTag["SIZE"].first);	
	}
	else if(node->tagVal=="TEXT"){
		add_lexChild(root,"TEXT",node->content);
	}
	else if(node->tagVal=="SYMBOL"){
		add_lexChild(root,"SYMBOL",convertTag[node->content].first);
	}
	else if(node->tagVal=="COMMENT"){
		add_lexChild(root,"COMMENT",convertTag["COMMENT"].first+"\n"+node->content.substr(4,node->content.length()-7)+"\n"+convertTag["COMMENT"].second);	
	}
	else{
		add_lexChild(root,node->tagVal,convertTag[node->tagVal].first);
	}

	if(!node->children.empty()){
		for(int i=0;i<node->children.size();i++){
			add_lexChild(root,convert(add_lexNode(node->children[i]->tagVal),node->children[i]));
		}
	}
	return root;
}