#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
}*head=NULL;



void push(int x)
{
    node *newnode=new node;
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        newnode->next=head;
           head=newnode;
    }
}

void pop()
{
    if(head==NULL)
    {
        cout<<"\n Empty stack";
    }
    else{
            node *temp=head;
            head=head->next;
            delete temp;
    }
}

void top()
{
  cout<<head->data<<"\n";
}

bool empty()
{
    if(head==NULL)
    {
        return true;
    }
    return false;
}
int main()
{   int n;
    cin>>n;
   for(int i=0;i<n;i++)
     push(i);
   while(!empty())
{     top();
       pop();       
   }        
}