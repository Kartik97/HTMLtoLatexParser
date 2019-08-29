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

void add_children(treeNode* node,vector<treeNode*> c1){
	for(int i=0;i<c1.size();i++){
		if(c1[i])
			node->children.push_back(c1[i]);
	}
}

void add_attributes(treeNode* node,string att,string attVal){
	node->att.push_back(att);
	node->attVal.push_back(attVal);
}

// void update(vector<treeNode*> v){
// 	treeNode* first = (*v)[0];
// 	for(int i=1;i<(*v).size();i++){
// 		if(first->tagVal == (*v)[i]->tagVal){
// 			first->content=first->content+(*v)[i]->content;
// 		}
// 		else{
// 			node->children.push_back(first);
// 			first = (*v)[i];
// 		}
// 	}
// 	node->children.push_back(first);
// }

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