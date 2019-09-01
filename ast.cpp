#include<bits/stdc++.h>
#include "ast.h"
using namespace std;
#define copy(v1,v2) copy(v2.begin(),v2.end(),back_inserter(v1))
#define pb(x) push_back(x)

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

treeNode* add_children(treeNode* node,vector<treeNode*> c1){
	for(int i=0;i<c1.size();i++){
		if(c1[i])
			node->children.push_back(c1[i]);
	}
	return node;
}

treeNode* add_attributes(treeNode* node,string att,string attVal){
	node->att.insert(node->att.begin(),att);
	node->attVal.insert(node->attVal.begin(),attVal);
	return node;
}

node* add_child_neighbour(node* c,string name,node *n){
	vector<treeNode*> v;
	node* temp = new node;
	treeNode* ptr=add_node(name);
	add_children(ptr,c->v);
	v.pb(ptr);
	copy(temp->v,v);
	copy(temp->v,n->v);
	return temp;
}

node* add_child_neighbour(node* c1,node* c2,string name,node *n){
	vector<treeNode*> v;
	node* temp = new node;
	treeNode* ptr=add_node(name);
	add_children(ptr,c1->v);
	add_children(ptr,c2->v);
	v.pb(ptr);
	copy(temp->v,v);
	copy(temp->v,n->v);
	return temp;
}

node* add_neighbour(string name,node *n){
	vector<treeNode*> v;
	node* temp = new node;
	treeNode* ptr=add_node(name);
	v.pb(ptr);
	copy(temp->v,v);
	copy(temp->v,n->v);
	return temp;
}

node* add_start(string name){
	vector<treeNode*> v;
	node* temp = new node;
	treeNode* ptr=add_node(name);
	v.pb(ptr);
	copy(temp->v,v);
	return temp;	
}

node* add_startChild(node *c,string name){
	vector<treeNode*> v;
	node* temp = new node;
	treeNode* ptr=add_node(name);
	add_children(ptr,c->v);
	v.pb(ptr);
	copy(temp->v,v);
	return temp;
}

node* add_startChild(node *c1,node* c2,string name){
	vector<treeNode*> v;
	node* temp = new node;
	treeNode* ptr=add_node(name);
	add_children(ptr,c1->v);
	add_children(ptr,c2->v);
	v.pb(ptr);
	copy(temp->v,v);
	return temp;
}

int find_parent(node* n){
	string s1("ULCL");
	string s2("OLCL");
	for(int i=0;i<n->v.size();i++){
		if((n->v[i]->tagVal==s1) || (n->v[i]->tagVal==s2))
			return i;
	}
}

void print(treeNode* node){
	cout<<"["<<node->tagVal;
	if(!node->content.empty()){
		cout<<": "<<node->content;
	}
	cout<<"]"<<endl;
	if(!node->att.empty()){
		cout<<" (";
		for(int i=0;i<node->att.size();i++){
			cout<<" ("<<node->att[i]<<": "<<node->attVal[i]<<") ";
		}
		cout<<")"<<endl;
	}
	cout<<"{ ";
	if(!node->children.empty()){
		for(int i=0;i<node->children.size();i++){
			print(node->children[i]);
		}
	}
	cout<<" }"<<endl;
}

void clearFile(string s){
	ofstream file;
	file.open(s,ofstream::out|ofstream::trunc);
	file.close();
}

void write(treeNode *node){
	ofstream file;
	file.open("htmlAst.txt",ios::app);
	if(!file){
		cout<<"file error";
		print(node);
	}
	else{
		file<<"["<<node->tagVal;
		if(!node->content.empty()){
			file<<": "<<node->content;
		}
		file<<"] ";
		if(!node->att.empty()){
			file<<" (";
			for(int i=0;i<node->att.size();i++){
				file<<" ("<<node->att[i]<<": "<<node->attVal[i]<<") ";
			}
			file<<")"<<endl;
		}
		file<<"\n{ "<<endl;
		if(!node->children.empty()){
			for(int i=0;i<node->children.size();i++){
				write(node->children[i]);
			}
		}
		file<<" }"<<endl;
	}
}
