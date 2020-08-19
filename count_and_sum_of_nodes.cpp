#include<bit/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left,*right;
}*root;

queue<node*>q;

node* addnewnode(int data)
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
     root=addnewnode(data);
     q.push(root);
    }
  if(!q.empty())
     {
       node *curr=q.front();
      if(curr->left==NULL)
            { 
                curr->left=addnewnode(data);
                q.push(curr->left);
            }
        else{
            
            curr->right=addnewnode(data);
                q.push(curr->right);
                q.pop();
            }     
     }
}

int count(node *root)
{
    if(root!=NULL)
     {
         int count=0;
         count=count(root->left)+ 1 + count(root->right);
         return count;

     }
    return 0;
}
int sum(node *root)
{
    if(root!=NULL)
     {
         int sum=0;
         sum=sum(root->left)+ root->data + sum(root->right);
         return sum;
     }
     return 0;
}

void inorder(node *root)
{
    if(root!=NULL)
    {
         inorder(root->left);
         cout<<root->data<<" ";   
         inorder(root->right);
    }
}

int main()
{
 int n,data;

 cout<<"\n Enter number of data you want to insert in Tree :";
 cin>>n;

    for(int i=0;i<n;i++)
    {
       cin>>data;
       insert(data);
    }
 
 // cout<<count(root);

 inorder(root);
 

  return 0;
}