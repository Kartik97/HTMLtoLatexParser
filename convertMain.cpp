#include "convert.h"
#include<bits/stdc++.h>
using namespace std;

extern lexNode* handleTR(lexNode *root,treeNode *node);
extern map<string,pair<string,string>> convertTag;
int main(){
	define_mapping();

	treeNode *ptr=add_node("TR");
	vector<treeNode *> v,v1;
	v.push_back(add_node("COMMENT","<!-- TWST OCMa -->"));
	v1.push_back(add_node("TEXT","test1"));
	v.push_back(add_children(add_node("TH"),v1));
	v1.push_back(add_node("TEXT","test2"));
	v.push_back(add_children(add_node("TH"),v1));
	v1.push_back(add_node("TEXT","test3"));
	v.push_back(add_node("COMMENT","<!-- THE TWIST -->"));
	v.push_back(add_children(add_node("TH"),v1));
	add_children(ptr,v);
	


	string child=convertTag["TABLE"].first+"{ |";
	int s=ptr->children.size();
	for(int i=0;i<ptr->children.size();i++)
		if(ptr->children[i]->tagVal=="TD" || ptr->children[i]->tagVal=="TH")
			child=child+"c|";
	child=child+" }\n\\hline";
	lexNode *tr=add_lexNode("TR",child);
	handleTR(tr,ptr);

	printLex(tr);
	return 1;
}