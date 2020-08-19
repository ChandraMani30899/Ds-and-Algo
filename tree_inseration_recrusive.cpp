#include<iostream>
using namespace std;
struct node{
    int data;
    node *parent;
    node *left;
    node *right;
    node(int n)
    {    d=n;

        left=NULL;
        right=NULL;
    }
}*root;

node* inseration(node *root,int n)
{
    node *newnode=new node(n);
        if(root==NULL)
        {
            root=newnode;
        
        }
        else{
               
        }
}

int main()
{    root=NULL;
     node *curr=root;
     int n;
    for(int i=0;i<10;i++)
    {      
        node *newnode = new node(i);
        if (curr == NULL)
        {
            curr = newnode;
        }
        else
        {

        }
    }
}