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






void bfs(node *root)
{
    if (root == NULL)
           return;
    queue<node *> Q;
    node *curr;
    Q.push(root);
    while (!Q.empty())
    {

        curr = Q.front();
        cout << curr->data << " ";
        Q.pop();
        if (curr->left != NULL)
            Q.push(curr->left);
        if (curr->right != NULL)
            Q.push(curr->right);
    }
}

node* search(int data)
{
    if (root->data == data)
        return root;
    queue<node *> Q;
    node *curr;
    Q.push(root);
    while (!Q.empty())
    {

        curr = Q.front();
            if(curr->data == data)
                {
                    break;
                }
        Q.pop();
        if (curr->left != NULL)
            Q.push(curr->left);
        if (curr->right != NULL)
            Q.push(curr->right);
    }
    return curr;
}

void inorder_Successor(node *find)
{ 
       
}


void Delete(int data)
{
   node *find=serach(data);
   
}

int main()
{   root=NULL;
   
   for(int i=1;i<2;i++)
      {
           insert(i);
           /*if(i==0)
            {
                root->left=add(200);
                q.push(root->left);
            }*/
      }
     
      bfs(root);
 
      cout<<"\n";

       Delete(3);
       bfs(root);
       Delete(4);
       cout << "\n";
       bfs(root);
       Delete(1);
       cout<<"\n";
       bfs(root);

      //cout << "\nright:" << root->right->data;
      return 0;
}