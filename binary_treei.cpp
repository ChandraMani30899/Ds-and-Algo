#include<bits/stdc++.h>
using namespace std;
struct node{
  
  int data;
  node *left,*right;

}*root;

node* addNode(int data)
{
    node *newnode=new node;
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

insert(int data)
{
   if(root=NULL)
    {
        root=addNode(data);
    }

   else{
      queue<node*>q;
       node *pre=addNode(data);
      q.push(root);
       
      while(!q.empty())
      {
         node *curr=q.top();
         q.pop();
          
      } 
   }

}

int main()
{
   root=NULL;
  

  
}