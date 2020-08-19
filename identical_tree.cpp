#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left,*right;
}*root;

queue<node*>q;

node *add(int data)
{
    node *newnode=new node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

 void insert(int data)
{
      if(root==NULL)
       {
           root=add(data);
           q.push(root);
    
       }
      else{
                 node *pre=add(data);
                 node *curr=q.front();
         
             if(curr->left==NULL)
                {
                    curr->left=pre;
                    q.push(curr->left);
                }
             else if(curr->right==NULL)
                {
                    curr->right=pre;
                    q.push(curr->right);
                    q.pop();
                }
                   
           
      } 
    
}




void preorder(node *root,node *root2)
{
               if(root!=NULL && root2 !=NULL)
                {
                         
                }
}







int main()
{   root=NULL;
   
   for(int i=1;i<10;i++)
      {
           insert(i);
           /*if(i==0)
            {
                root->left=add(200);
                q.push(root->left);
            }*/
      }
     
      cout<<bfs(root);
     


      cout<<"\n";

      

      return 0;
}