#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left,*right,*parent;
}*root;
node *add(int data)
{
    node *newnode=new node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->parent=NULL;
    return newnode;
}

queue<node *> q;

void insert(int data)
{
    if (root == NULL)
    {
        root = add(data);
        q.push(root);
    }
    else
    {
        node *pre = add(data);
        node *curr = q.front();

        if (curr->left == NULL)
        {
            curr->left = pre;
            curr->left->parent=curr;
            q.push(curr->left);
        }
        else if (curr->right == NULL)
        {
            curr->right = pre;
            curr->right->parent=curr;
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
node *findinordersucc(int data)
{
   node *ans=NULL;
   node *target=findnode(data);
   if(target->right !=NULL)
    return leftmost(target->right)
   else{

       node  *curr =target->parent;
       wile(curr !=NULL)
       {
           if(target == curr->left)
                  {
                      

                  }
       }
   } 
}


int main()
{
    root = NULL;

    for (int i = 1; i < 6; i++)
    {
        insert(i);
        /*if(i==0)
            {
                root->left=add(200);
                q.push(root->left);
            }*/
    }

    bfs(root);


node *succ=findinordersucc(2);
   if(*succ==NULL)
    {

    }
    cout << "\n";
    return 0;
}
