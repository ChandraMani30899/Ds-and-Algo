#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left,*right;
	
}*root;

node* addnew(int data)
{
	node *newnode=new node;
		newnode->data=data;
		newnode->left=NULL;
		newnode->right=NULL;
 	     return newnode;
}
 
 
int height(node *root)
{
   if(root==NULL)
       return 0;
   
   return 1 + max(height(root->left),height(root->right));   
}
 
int diameter(node *root)
{
	if(root==NULL)
	 return 0;
	int heightL=height(root->left);
	int heightr=height(root->right);
	int op1=heightL + heightr;
	int op2=diameter(root->left);
	int op3=diameter(root->right);
	return max(op1,max(op2,op3)); 
 } 
 
int main()
{
 root = addnew(1);
 root->left = addnew(2);
 root->left->left = addnew(3);
 root->left->left->left = addnew(4);
 root->right = addnew(5);
 root->right->right = addnew(6);
 root->right->right->right = addnew(7);
 root->right->right->right->right= addnew(8);
 cout<<"\n"<<height(root);
 cout<<"\n"<<diameter(root);
  return 0;
}
