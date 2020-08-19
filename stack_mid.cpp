#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
}*head=NULL,*mid=NULL;
int count=0;

void insert(int x)
{ node *newnode=new node;
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        mid=newnode;
        count++;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        count++;
        if(count%2!=0)
        {
          mid=mid->prev;
        }
    }
}

void mid_move_while_pop()
{
    if(mid==NULL)
    {
        cout<<"\n Empty stack";
        return;
    }
    else if(mid==head)
    {  
        mid=NULL;
        head=NULL;
        count=0;
        cout << "\n Empty stack";
        return;
    }
    else{
      node *temp=head;
         head->next->prev=NULL;
         head=head->next;
         delete temp;
         count--;
         if(count%2==0)
         {
            mid=mid->next;
              
         }
         cout << mid->data << " ";
    }
    
}
void delete_of_mid()
{

}


void midData()
{
cout<<mid->data<<" ";
}


int main()
{  int n;
   cin>>n;
    for(int i=0;i<n;i++)
    {
       insert(i);
       midData();
    }
    cout<<"\n";
    while(head!=NULL)
    {
        mid_move_while_pop();
    }
}