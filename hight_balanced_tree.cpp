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

pair<int, bool> isBalancedEfficent(node *root)
{
    pair<int, bool> p;
    if (root == NULL)
    {
        p.first = 0;
        p.second = true;
       return p;    
    }

    pair<int, bool> left;
    pair<int, bool> right;

    left = isBalancedEfficent(root->left);
    right = isBalancedEfficent(root->right);
    
    
    p.first  = max(left.first , right.first) + 1;
    if (left.second && right.second && (abs(left.first - right.first) <= 1))
    {
        p.second = true;
    }
    else
        p.second = false;

    return p;
}

bool isBalanced(node *root)
{
    pair<int,bool> p ;

    p = isBalancedEfficent(root);

    return p.second;
}


int main()
{
    node *root=NULL;
    
    root=addnewnode(8);
    root->left=addnewnode(10);
    root->right=addnewnode(3);
    root->left->left=addnewnode(1);
    root->left->left->left= addnewnode(4);
    //root->left->right=addnewnode(6);
   // root->left->right->left=addnewnode(9);
    // root->left->right->right=addnewnode(7);
    root->right->right=addnewnode(14);
    root->right->right->right=addnewnode(13);

    bfs(root);


 //  sumReplacement(root);
    
      cout<<"\n";
     
  cout<<isBalanced(root);
    return 0;
}