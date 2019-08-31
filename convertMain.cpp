#include "convert.h"
#include<bits/stdc++.h>
using namespace std;

extern lexNode* handleTR(lexNode *root,treeNode *node);
extern lexNode* handleTable(treeNode *node);
extern map<string,pair<string,string>> convertTag;
int main(){
	define_mapping();
	treeNode *ptr1=add_node("TABLE");
	treeNode *ptr=add_node("TR");
	treeNode *p=add_node("CAP");
	vector<treeNode *> v,v1,v2,v3;

	v1.push_back(add_node("TEXT","test1"));
	add_children(p,v1);
	v2.push_back(p);
	add_children(ptr1,v2);

	v1.clear(); v2.clear();
	v.push_back(add_node("COMMENT","<!-- TWST OCMa -->"));
	v1.push_back(add_node("TEXT","test1"));
	v.push_back(add_children(add_node("TH"),v1));
	v1.clear();
	v1.push_back(add_node("TEXT","test2"));
	v.push_back(add_children(add_node("TH"),v1));
	v1.clear();
	v1.push_back(add_node("TEXT","test3"));
	v.push_back(add_node("COMMENT","<!-- THE TWIST -->"));
	v.push_back(add_children(add_node("TH"),v1));
	add_children(ptr,v);
	v2.push_back(ptr);
	add_children(ptr1,v2);

	ptr=add_node("TR");
	v.clear(); v1.clear(); v2.clear();
	v.push_back(add_node("COMMENT","<!-- TWST OCMa -->"));
	v1.push_back(add_node("TEXT","test1"));
	v.push_back(add_children(add_node("TD"),v1));
	v1.clear();
	v1.push_back(add_node("TEXT","test2"));
	v.push_back(add_children(add_node("TD"),v1));
	v1.clear();
	v1.push_back(add_node("TEXT","test3"));
	v.push_back(add_node("COMMENT","<!-- THE TWIST -->"));
	v.push_back(add_children(add_node("TD"),v1));
	add_children(ptr,v);
	v2.push_back(ptr);
	add_children(ptr1,v2);
	
	printLex(handleTable(ptr1));
/*	string child=convertTag["TABLE"].first+"{ |";
	int s=ptr->children.size();
	for(int i=0;i<ptr->children.size();i++)
		if(ptr->children[i]->tagVal=="TD" || ptr->children[i]->tagVal=="TH")
			child=child+"c|";
	child=child+" }\n\\hline";
	lexNode *tr=add_lexNode("TR",child);
	handleTR(tr,ptr);
	*/
	return 1;
}