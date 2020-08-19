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






int  bfs(node *root)
{  int level = 0;
    if (root == NULL)
           return 0;
    queue<node*> Q;
    node *curr;
    Q.push(root);
    Q.push(NULL);
    while (Q.size()>1)
    {
           
          curr = Q.front();
            Q.pop();
       if(curr==NULL)
         {
             level++;
             Q.push(NULL);
             continue;
         }

        if (curr->left != NULL)
            Q.push(curr->left);
        if (curr->right != NULL)
            Q.push(curr->right);
    }
    return level;
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