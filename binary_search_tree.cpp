#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left,*right;
};


class LinkedList{
    public:
    
}

node* addnewnode(int data)
{
    node *newnode=new node;
    newnode->data=data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

node* insert(node *root,int data)
{

    if(root==NULL)
    {
        root=addnewnode(data);
        return root;
    }

   node *curr,*prev;
   curr=root;
   prev=root;
   
   while(curr!=NULL)
   {
       prev=curr;
       if(curr->data > data)
       {
           curr=curr->left;
       }
       else curr=curr->right;
   } 


   if(prev->data>data)
    {
          prev->left=addnewnode(data);
    }   
    else prev->right=addnewnode(data);


      return root;

}

node* Insert(node *root,int data)
{
    if(root==NULL)
    {
        return addnewnode(data); 
    }

  if(data <= root->data )
  {
      root->left=Insert(root->left,data);
  }  
  else root->right=Insert(root->right,data);

  return root;
}

int count(node *root)
{
     int v=0;
    if(root->left!=NULL)
             v++;

    if (root->right != NULL)
               v++;

     return v;    
}

node* deletion(node *root,int data)
{
    if(root==NULL)
      return NULL;
    
    if(data<root->data)
    {
        root->left=deletion(root->left,data);
        return root;
    }

    else if(data==root->data)
    { // 3 Case

       if(root->left==NULL && root->right==NULL)
         {
             delete root;
             return NULL;
         }

       if(root->left!=NULL && root->right==NULL)
       {
            node *temp=root->left;
            delete root; 
           return temp;
       }  

       if(root->right!=NULL && root->left==NULL)
       {
           node *temp=root->right;
           delete root;
           return temp;
       }
        

       if(root->right!=NULL && root->left !=NULL)
       {
            node *replace=root->right;
         // finding inorder succesor;
            while(replace->left!=NULL)
             {
                 replace=replace->left;
             }

            root->data=replace->data;
            root->right=deletion(root->right,replace->data);
            return root; 
       }  
    }

    else{

         root->right=deletion(root->right,data);
         return root;
    }

}

bool search(node *root,int data)
{
    if(root==NULL)
    {
        return false;
    }

    if(root->data==data)
     return true;


    if(data < root->data)
    {
        return search(root->left,data);
    } 
    else return search(root->right,data);
}


void display(node *root)
{
  if(root!=NULL)
    {
        display(root->left);
        cout<<root->data<<" ";
        display(root->right);
    }
}


bool isBst(node *root,int min=INT_MIN,int max=INT_MAX)
{ 
     if(root==NULL)
      return true;
  
   if(root->data>min && root->data< max && isBST(root->left,min,root->data) && (root->right,root->data,max) )
                return true;

     return false;           

}



int main()
{
 node *root=NULL,*Root=NULL;
 
//   root=insert(root,10);
//   root=insert(root,5);
//   root=insert(root,11);
//   root=insert(root,12);
//   root=insert(root,15);
//   root=insert(root,4);
//   root=insert(root,2);

//   display(root);
//   cout<<"\n";
  Root = Insert(Root, 8);
  Root = Insert(Root, 3);
  Root = Insert(Root, 10);
  Root = Insert(Root, 1);
  Root = Insert(Root, 6);
  Root = Insert(Root, 14);
  Root = Insert(Root, 13);
  Root = Insert(Root, 4);
  Root = Insert(Root, 7);
  display(Root);
  Root=deletion(Root,3);
  cout << "\n";
  display(Root);
  return 0;
}