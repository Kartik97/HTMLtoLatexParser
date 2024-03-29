#include <bits/stdc++.h>
#include "convert.h"
using namespace std;

map<string,pair<string,string>> convertTag;
extern lexNode* convert(treeNode *node,int flag,int table);
int title;
void define_mapping(){
	convertTag["DOCTYPE HTML"]=make_pair("","");
	convertTag["HTML"]=make_pair("","");
	convertTag["HEAD"]=make_pair("","");
	convertTag["TITLE"]=make_pair("\\title{","}\n");
	convertTag["BODY"]=make_pair("\\begin{document}\n","\\end{document}\n");
	convertTag["DIV"]=make_pair(" \\\\ "," \\\\ \n");
	convertTag["B"]=make_pair("\\textbf{","}\n");
	convertTag["EM"]=make_pair("\\emph{","}\n");
	convertTag["I"]=make_pair("\\textit{","}\n");
	convertTag["SMALL"]=make_pair("\\small ","\\normalsize \n");
	convertTag["STRONG"]=make_pair("\\textbf{","}\n");
	convertTag["SUB"]=make_pair("\\(_{","}\\)");
	convertTag["SUP"]=make_pair("\\(^{","}\\)");
	convertTag["U"]=make_pair("\\underline{","}\n");
	convertTag["TT"]=make_pair(" \\texttt{","}\n");
	convertTag["P"]=make_pair("\n\\par ","\n");
	convertTag["H1"]=make_pair(" \n\\section*{","}\n ");
	convertTag["H2"]=make_pair(" \n\\subsection*{","}\n ");
	convertTag["H3"]=make_pair(" \n\\subsubsection*{","}\n ");
	convertTag["H4"]=make_pair(" \n\\paragraph*{","}\n ");
	convertTag["H5"]=make_pair(" \n\\subparagraph*{","}\n ");
	convertTag["A"]=make_pair("{","}  \n");
	convertTag["HREF"]=make_pair("\n\\href{","}");
	convertTag["IMG"]=make_pair("\\includegraphics[","\n");
	convertTag["SRC"]=make_pair("{","}");
	convertTag["HEIGHT"]=make_pair("height=","pt");
	convertTag["WIDTH"]=make_pair("width=","pt");
	convertTag["FONT"]=make_pair("\\fontsize{ ","\\normalsize\n");                           //10 pt normal
	convertTag["SIZE"]=make_pair("pt}{12pt}\\selectfont ","");
	convertTag["CENTER"]=make_pair("\\begin{center}\n","\\end{center}\n");
	convertTag["BR"]=make_pair("\n","");
	convertTag["OL"]=make_pair("\\begin{enumerate}\n","\\end{enumerate}\n");
	convertTag["UL"]=make_pair("\\begin{itemize}\n","\\end{itemize}\n");
	convertTag["LI"]=make_pair("\\item \\hspace{1pt}","\n");
	convertTag["DL"]=make_pair("\\begin{description}\n","\\end{description}\n");
	convertTag["DT"]=make_pair("\\item[","] \\hspace{1pt} \n");
	convertTag["DD"]=make_pair("","");
	convertTag["FIGURE"]=make_pair("\\begin{figure}\n","\\end{figure}\n");
	convertTag["FIGURECAPTION"]=make_pair("\\caption{","}\n");
	convertTag["_TABLE"]=make_pair("\n \\begin{table}[!ht]\n","");
	convertTag["CAP"]=make_pair("\\caption{\n","}\n\\centering\n");
	convertTag["TABLE"]=make_pair("\n \\begin{tabular}","\n \\end{tabular}\n\\end{table}\n");
	convertTag["TR"]=make_pair("","\\\\ \n\\hline\n");
	convertTag["TD"]=make_pair("","");
	convertTag["TH"]=make_pair("\\textbf{ ","}\n");
	convertTag["alpha"]=make_pair("$\\alpha$ ","");
	convertTag["beta"]=make_pair("$\\beta$ ","");
	convertTag["chi"]=make_pair("$\\chi$ ","");
	convertTag["delta"]=make_pair("$\\delta$ ","");
	convertTag["epsilon"]=make_pair("$\\epsilon$ ","");
	convertTag["eta"]=make_pair("$\\eta$ ","");
	convertTag["gamma"]=make_pair("$\\gamma$ ","");
	convertTag["iota"]=make_pair("$\\iota$ ","");
	convertTag["kappa"]=make_pair("$\\kappa$ ","");
	convertTag["lambda"]=make_pair("$\\lambda$ ","");
	convertTag["mu"]=make_pair("$\\mu$ ","");
	convertTag["nu"]=make_pair("$\\nu$ ","");
	convertTag["omega"]=make_pair("$\\omega$ ","");
	convertTag["phi"]=make_pair("$\\phi$ ","");
	convertTag["pi"]=make_pair("$\\pi$ ","");
	convertTag["psi"]=make_pair("$\\psi$ ","");
	convertTag["rho"]=make_pair("$\\rho$ ","");
	convertTag["sigma"]=make_pair("$\\sigma$ ","");
	convertTag["tau"]=make_pair("$\\tau$ ","");
	convertTag["theta"]=make_pair("$\\theta$ ","");
	convertTag["xi"]=make_pair("$\\xi$ ","");
	convertTag["zeta"]=make_pair("$\\zeta$ ","");
	convertTag["Delta"]=make_pair("$\\Delta$ ","");
	convertTag["Alpha"]=make_pair("$\\Alpha$ ","");
	convertTag["Gamma"]=make_pair("$\\Gamma$ ","");
	convertTag["Lambda"]=make_pair("$\\Lambda$ ","");
	convertTag["Omega"]=make_pair("$\\Omega$ ","");
	convertTag["Phi"]=make_pair("$\\Phi$ ","");
	convertTag["Pi"]=make_pair("$\\Pi$ ","");
	convertTag["Xi"]=make_pair("$\\Xi$ ","");
	convertTag["Psi"]=make_pair("$\\Psi$ ","");
	convertTag["Sigma"]=make_pair("$\\Sigma$ ","");
	convertTag["Theta"]=make_pair("$\\Theta$ ","");
	convertTag["lt"]=make_pair("\\<","");
	convertTag["gt"]=make_pair("\\>","");
	convertTag["nbsp"]=make_pair("    ","");
	convertTag["quot"]=make_pair("\"","");
	convertTag["apos"]=make_pair("\'","");
	convertTag["COMMENT"]=make_pair("\\begin{comment}\n","\\end{comment} \\\\ \n ");
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
	add_lexChild(root,"PREAMBLE","\\documentclass{article}\n\\usepackage{hyperref}\n\\usepackage{graphicx}\n\\usepackage{verbatim}\n\\hypersetup{colorlinks=true}\n\\newcommand{\\Alpha}{A}\n\\newcommand{\\Beta}{B}\n\\newcommand{\\Epsilon}{E}\n");
	return root;
}

void printLex(lexNode *root){
	if(!root){
		cout<<"LEX ROOT ERROR";
		exit(0);
	}
	cout<<"["<<root->type<<"] :";
	if(!root->value.empty()){
		cout<<root->value;
	}
	cout<<endl;
	if(!root->children.empty()){
		for(int i=0;i<root->children.size();i++){
			printLex(root->children[i]);
		}
	}
}

void writeLex(lexNode *root){
	ofstream file;
	file.open("lexAst.txt",ios::app);
	if(!file){
		cout<<"file error";
		printLex(root);
	}
	if(!root){
		cout<<"LEX ROOT ERROR";
		exit(0);
	}
	file<<"["<<root->type<<"] :";
	if(!root->value.empty()){
		file<<root->value;
	}
	file<<endl;
	file.close();
	if(!root->children.empty()){
		for(int i=0;i<root->children.size();i++){
			writeLex(root->children[i]);
		}
	}
}	

void writeTex(lexNode *root,string s){
	ofstream file;
	file.open(s,ios::app);
	if(!file){
		cout<<"file error";
		printLex(root);
	}
	if(!root->value.empty()){
		file<<root->value;
	}
	file.close();
	if(!root->children.empty()){
		for(int i=0;i<root->children.size();i++){
			writeTex(root->children[i],s);
		}
	}
}



string switchChar(string s,char x,string conv){
	string str="";
	for(int i=0;i<s.length();i++){
		if(s[i]==x)
			str+=conv;
		else str+=s[i];
	}
	return str;
}  

string checkText(string s){
	string res;
	res=switchChar(s,'\\',"\\textbackslash ");
	res=switchChar(res,'{',"\\{");
	res=switchChar(res,'}',"\\}");
	res=switchChar(res,'#',"\\#");
	res=switchChar(res,'$',"\\$");
	res=switchChar(res,'%',"\\%");
	res=switchChar(res,'&',"\\&");
	res=switchChar(res,'~',"\\~{}");
	res=switchChar(res,'_',"\\_");
	res=switchChar(res,'^',"\\^{}");
	return res;
}


lexNode* convertTR(lexNode *root,treeNode *node){
	int count=-1;
	for(int i=0;i<node->children.size();i++)
		if(node->children[i]->tagVal=="TD" || node->children[i]->tagVal=="TH")
			count++;


	for(int i=0;i<node->children.size();i++){
			add_lexChild(root,convert(node->children[i],1,1));
		if(convertTag.find(node->children[i]->tagVal)!=convertTag.end())
		{
			if((node->children[i]->tagVal=="TH" || node->children[i]->tagVal=="TD") && count>0){
				add_lexChild(root,node->children[i]->tagVal+" END",convertTag[node->children[i]->tagVal].second+" & ");
				count--;
			}
			else{
				//cout<<count<<endl;
				add_lexChild(root,node->children[i]->tagVal+" END",convertTag[node->children[i]->tagVal].second);
			}
		}

	}
	return root;
}

lexNode* tableBorder(treeNode *node){
	lexNode *root;
	int rowFlag=0;
	string child=convertTag["_TABLE"].first;
	root=add_lexNode("TOP TABLE",child);
	if(!node->children.empty()){
		for(int i=0;i<node->children.size();i++){
			if(node->children[i]->tagVal=="CAP"){
				add_lexChild(root,convert(node->children[i],1,1));
				add_lexChild(root,node->children[i]->tagVal+" END",convertTag[node->children[i]->tagVal].second);
			}
			else if(node->children[i]->tagVal=="TR"){
				if(rowFlag==0){
					child=convertTag["TABLE"].first+"{ |";
					int s=node->children[i]->children.size();
					for(int j=0;j<node->children[i]->children.size();j++)
						if(node->children[i]->children[j]->tagVal=="TD" || node->children[i]->children[j]->tagVal=="TH")
							child=child+"c|";
					child=child+" }\n\\hline   ";
					lexNode *tr=add_lexNode("TR",child);
					convertTR(tr,node->children[i]);
					add_lexChild(root,tr);
					add_lexChild(root,"TR END","\\\\ \n\\hline ");
					rowFlag=1;
				}
				else{
					lexNode *tr=add_lexNode("TR",convertTag["TR"].first);
					convertTR(tr,node->children[i]);
					add_lexChild(root,tr);
					add_lexChild(root,"TR END","\\\\ \n\\hline ");
				}
			}
			else{
				add_lexChild(root,convert(node->children[i],1,1));
				add_lexChild(root,node->children[i]->tagVal+" END",convertTag[node->children[i]->tagVal].second);
			}
		}
	}
	if(rowFlag!=1){
		child=convertTag["TABLE"].first+"{c}\n  ";
		lexNode *tr=add_lexNode("TR",child);
		add_lexChild(root,tr);

	}
	return root;
}

lexNode* tableNoBorder(treeNode *node){
	lexNode *root;
	int rowFlag=0;
	string child=convertTag["_TABLE"].first;
	root=add_lexNode("TOP TABLE",child);
	if(!node->children.empty()){
		for(int i=0;i<node->children.size();i++){
			if(node->children[i]->tagVal=="CAP"){
				add_lexChild(root,convert(node->children[i],1,1));
				add_lexChild(root,node->children[i]->tagVal+" END",convertTag[node->children[i]->tagVal].second);
			}
			else if(node->children[i]->tagVal=="TR"){
				if(rowFlag==0){
					child=convertTag["TABLE"].first+"{ ";
					int s=node->children[i]->children.size();
					for(int j=0;j<node->children[i]->children.size();j++)
						if(node->children[i]->children[j]->tagVal=="TD" || node->children[i]->children[j]->tagVal=="TH")
							child=child+"c ";
					child=child+" }\n   ";
					lexNode *tr=add_lexNode("TR",child);
					convertTR(tr,node->children[i]);
					add_lexChild(root,tr);
					add_lexChild(root,"TR END","\\\\ \n ");
					rowFlag=1;
				}
				else{
					lexNode *tr=add_lexNode("TR",convertTag["TR"].first);
					convertTR(tr,node->children[i]);
					add_lexChild(root,tr);
					add_lexChild(root,"TR END","\\\\ \n ");
				}
			}
			else{
				add_lexChild(root,convert(node->children[i],1,1));
				add_lexChild(root,node->children[i]->tagVal+" END",convertTag[node->children[i]->tagVal].second);
			}
		}
	}
	if(rowFlag!=1){
		child=convertTag["TABLE"].first+"{c}\n  ";
		lexNode *tr=add_lexNode("TR",child);
		add_lexChild(root,tr);

	}
	return root;
}

lexNode* convert(treeNode *node,int flag,int table){
	lexNode *root;
	if(flag==0){
		root=root_init();
	}
	else{
		if(node->tagVal=="A"){
			if(!node->att.empty()){
				if(node->att[0]=="HREF")
					root=add_lexNode("A",convertTag["HREF"].first+node->attVal[0]+convertTag["HREF"].second+convertTag["A"].first);	
			}
			else{
				root=add_lexNode("A",convertTag["HREF"].first+"#"+convertTag["HREF"].second+convertTag["A"].first);					
			}
		}
		else if(node->tagVal=="IMG"){
			string child=convertTag["IMG"].first;
			int srcflag=0;
			int pos=find(node->att.begin(),node->att.end(),"HEIGHT")-node->att.begin(),flag=0;
			if(pos<node->att.size()){
				child=child+"height="+node->attVal[pos]+"pt";
				flag=1;
			}
			pos=find(node->att.begin(),node->att.end(),"WIDTH")-node->att.begin();
			if(pos<node->att.size()){
				if(flag==1)
					child+=",";
				child=child+"width="+node->attVal[pos]+"pt";
				flag=1;
			}
			child+="]{";
			pos=pos=find(node->att.begin(),node->att.end(),"SRC")-node->att.begin();
			if(pos<node->att.size()){
				child=child+node->attVal[pos];
				srcflag=1;
			}
			child+="} \\\\";
			if(srcflag!=0)
				root=add_lexNode("IMG",child);
			else root=add_lexNode("IMG","{}");
		}
		else if(node->tagVal=="FONT"){
			if(!node->att.empty() && node->att[0]=="SIZE"){
				string s=to_string(4+4*(node->attVal[0][0]-48));
				root=add_lexNode("FONT",convertTag["FONT"].first+s+convertTag["SIZE"].first);	
			}
			else 
				root=add_lexNode("FONT",convertTag["FONT"].first+"11"+convertTag["SIZE"].first);	
		}
		else if(node->tagVal=="TEXT"){
			root=add_lexNode("TEXT",checkText(node->content));
		}
		else if(node->tagVal=="SYMBOL"){
			root=add_lexNode("SYMBOL",convertTag[node->content].first);
		}
		else if(node->tagVal=="COMMENT"){
			root=add_lexNode("COMMENT",convertTag["COMMENT"].first+"\n"+node->content.substr(4,node->content.length()-7));	
		}
		else if(node->tagVal=="TITLE"){
			root=add_lexNode(node->tagVal+" START",convertTag[node->tagVal].first);
			title=1;
		}
		else if(node->tagVal=="BODY"){
			if(title)
				root=add_lexNode(node->tagVal+" START",convertTag[node->tagVal].first+"\n"+"\\maketitle\n");
			else root=add_lexNode(node->tagVal+" START",convertTag[node->tagVal].first);
		}
		else if(node->tagVal=="TABLE"){
			if(!node->att.empty() && node->attVal[0]!="0")
				root=tableBorder(node);
			else
				root=tableNoBorder(node);
		}
		else if(table && (node->tagVal=="H1" || node->tagVal=="H2" || node->tagVal=="H3" || node->tagVal=="H4" || node->tagVal=="H5")){
			root=add_lexNode(node->tagVal+" START",convertTag["B"].first);
		}
		else{
			root=add_lexNode(node->tagVal+" START",convertTag[node->tagVal].first);
		}
	}


	if(!node->children.empty() && node->tagVal!="TABLE"){
		for(int i=0;i<node->children.size();i++){
			if(table)
				add_lexChild(root,convert(node->children[i],1,1));
			else
				add_lexChild(root,convert(node->children[i],1,0));

			if(convertTag.find(node->children[i]->tagVal)!=convertTag.end())
				add_lexChild(root,node->children[i]->tagVal+" END",convertTag[node->children[i]->tagVal].second);
		}
	}
	return root;
}