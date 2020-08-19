#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};
node* push(node* top,int data)
{
	node *newnode=new node;
	 newnode->data=data;
	 newnode->next=top;
	 top=newnode;
	 return top;
}
node* pop(node* top)
{
	  if(top!=NULL)
	   {
	   	    top=top->next;
	   }
	 return top;
}
void TOP(node* top)
 {
 	if(top!=NULL)
 	  {
 	  	cout<<"\n"<<top->data;
	   }
 }
bool isempty(node *top)
{
	if(top==NULL)
	  return true;
	else false;  
 } 
int main()
{
	node *top=NULL;
	
	top=push(top,10);
	top=push(top,9);
	top=push(top,8);
	top=push(top,7);
	top=push(top,6);
	top=push(top,5);
	top=push(top,4);
	top=push(top,3);
	top=push(top,2);
	top=push(top,1);
	top=pop(top);
	TOP(top);
	
}
