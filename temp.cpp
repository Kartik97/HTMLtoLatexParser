#include <bits/stdc++.h>
#include "ast.h"

using namespace std;

int main(){
	treeNode* temp=new treeNode;
	temp->tagVal="IMG";
	temp->content.push_back("abcd");
	temp->att.push_back("src");
	temp->attVal.push_back("abdc");
	treeNode* temp2=add_node("A","0");
	add_children(temp,temp2);
	print(temp);
	return 0;
}