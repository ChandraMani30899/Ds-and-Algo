#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
};

node* addnewnode(int data){
    
    node *newnode=new node;
    newnode->data=data;
    newnode->right=newnode->left=NULL;

    return newnode;
}

void bfs(node *root)
{
    queue<node*>q;

    q.push(root);
    q.push(NULL);
   while(q.size()!=1)
   {
       node *curr=q.front();
       q.pop();
        
      if(curr==NULL)
      {
          cout<<"\n";
          q.push(NULL);
          continue;
      }
      cout<<curr->data<<" ";
       if(curr->left!=NULL)
          q.push(curr->left);

       if(curr->right!=NULL)
          q.push(curr->right);
       
   }
}

int sumReplacement(node *root)
{
    if(root==NULL)
    {
        return 0;
    }

    if(root->left==NULL && root->right==NULL)
    {
         return root->data;
    }
     // recursive relation 

    int left = sumReplacement(root->left);
  
    int right = sumReplacement(root->right);

    int temp = root->data;
       
    root->data = left + right ;
 //    cout<<root->data<<"\n"; 

    return temp + root->data;         
}

int main()
{
    node *root=NULL;
    
    root=addnewnode(8);
    root->left=addnewnode(10);
    root->right=addnewnode(3);
    root->left->left=addnewnode(1);
    root->left->right=addnewnode(6);
    root->left->right->left=addnewnode(9);
    root->left->right->right=addnewnode(7);
    root->right->left=addnewnode(14);
    root->right->left->left=addnewnode(13);

    bfs(root);


   sumReplacement(root);
    
   cout<<"\n";
     
   bfs(root);
 
    return 0;
}