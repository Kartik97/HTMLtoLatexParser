#include<bits/stdc++.h>
#include "ast.h"
using namespace std;

treeNode* add_node(){
	treeNode* node = new treeNode;
	return node;
}

treeNode* add_node(string s){
	treeNode* node = new treeNode;
	node->tagVal=s;
	return node;
}
treeNode* add_node(string s,string content){
	treeNode* node = new treeNode;
	node->tagVal=s;
	node->content=content;
	return node;
}

treeNode* add_children(treeNode* node,treeNode* c1){
	node->children.push_back(c1);
	return node;
}

treeNode* add_attributes(treeNode* node,string att,string attVal){
	node->att.push_back(att);
	node->attVal.push_back(attVal);
	return node;
}

treeNode* update_children(treeNode* node,treeNode* child){
	treeNode* first = new treeNode;
	first->tagVal = child->tagVal;
	first->content = child->content;
	for(int i=0;i<child->children.size();i++){
		if(first->tagVal == child->children[i]->tagVal){
			first->content=first->content+child->children[i]->content;
		}
		else{
			node->children.push_back(first);
			first = new treeNode;
			first->tagVal=child->children[i]->tagVal;
			first->content=child->children[i]->content;
		}
	}
	node->children.push_back(first);
	return node;
}

void print(treeNode* node){
	cout<<"["<<node->tagVal;
	if(!node->content.empty()){
		cout<<": ";
		for(int i=0;i<node->content.size();i++){
			cout<<node->content[i];
		}
	}
	cout<<"]";
	if(!node->att.empty()){
		cout<<" (";
		for(int i=0;i<node->att.size();i++){
			cout<<" ("<<node->att[i]<<": "<<node->attVal[i]<<") ";
		}
		cout<<")";
	}
	cout<<"{ ";
	if(!node->children.empty()){
		for(int i=0;i<node->children.size();i++){
			print(node->children[i]);
		}
	}
	cout<<" }";
}