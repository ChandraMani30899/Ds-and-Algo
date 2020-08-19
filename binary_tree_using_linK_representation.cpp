#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
}*root;


void path(node *root)
{
    if(root==NULL)
       { 
            cout<<path<<endl;
           
           return;
       }

     string key=to_string(root->data);  
        

      


}

node *add(int data)
{
    node *newnode=new node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void inorder(node *root)
 {
     if(root==NULL)
        return;
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);   
 }

 void preorder(node *root)
 {
     if (root == NULL)
         return;
     cout << root->data << " ";
     preorder(root->left);
     preorder(root->right);
 }
 void postorder(node *root)
 {
     if (root == NULL)
         return;
     postorder(root->left);  
     postorder(root->right);
     cout << root->data << " ";

 }

 void bfs(node *root)
 {
     if(root==NULL)
     return;
queue<node*>q;
  node *curr;
    q.push(root);
    while(!q.empty())
      {
          
       curr=q.front();
       cout<<curr->data<<" ";
           q.pop();
          if(curr->left!=NULL)
               q.push(curr->left);
          if(curr->right!=NULL)
               q.push(curr->right);     
      }
 }

int size(node *root)
{
     if(root==NULL)
     return 0;
 int left=size(root->left);
 int right=size(root->right);

 return left+right+1;

}

int height(node *root)
{ 
    if(root==NULL)
    return -1;

    int left=height(root->left);
    int right=height(root->right);

    return max(left,right)+1;
}
int sumOfallNode(node *root)
{
    if(root==NULL)
    return 0;

    int left=sumOfallNode(root->left)+root->data;
    int right=sumOfallNode(root->right)+root->data;

    return left+right;
}
bool search(node *root,int item)
{
    if (root == NULL)
        return false;
    if(root->data==item)
      return true;

      return search(root->left,item) || search(root->right,item);
}

int diameter(node* root)
{

}

bool isBalanced(node*root)
{ 
       if(root=NULL)
         return true;

       bool left = isBalanced(root->left);
       bool right = isBalanced(root->right);

          if(!left or !right)
              false; 

       int leftheight = height(root->left);
       int rightheight = height(root->right);
       int balance = leftheight - rightheight;

       if (balance > 1 || balance < -1)
           return false;

        else return true;    
}
int main()
{
    root = NULL;
    root = add(1);
    root->left = add(2);
    root->right = add(3);
    root->left->left = add(4);
    root->left->right = add(5);
    root->right->right = add(6);
    inorder(root);
    cout << "\n";
    preorder(root);
    cout << "\n";
    postorder(root);
    cout << "\n";
    bfs(root);
    cout << "\n";
    cout << size(root);
    cout << "\n";
    cout << sumOfallNode(root);
    return 0;
}