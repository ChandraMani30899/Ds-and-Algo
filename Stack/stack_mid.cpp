#include<iostream>
using namespace std;

struct node{
	int data;
    node* next;
	node* prev;
}*head,*mid;
int push(int data,int cnt)
{   
	if(head==NULL)
	  {
	  	node *newnode=new node;
	  	newnode->data=data;
	  	newnode->next=NULL;
	  	newnode->prev=NULL;
	  	head=newnode;
	  	mid=newnode;
	  	cnt++;
	  	return cnt;
	  }
	  else{
	  	node *newnode=new node;
	  	newnode->data=data;
	  	newnode->next=head;
	  	head->prev=newnode;
	  	newnode->prev=NULL;
	  	head=newnode;
		  cnt++;
		  if(cnt%2==0)
		  {
		  	mid=mid->prev;
		  }
		     return cnt;
	  }
}
int mid_push(int data,int cnt)
{
	if(mid!=NULL)
	{  node *newnode=new node;
	    newnode->data=data;
	  	newnode->next=mid->next;
	  	mid->next->prev=newnode;
	  	newnode->prev=mid;
	  	mid->next=newnode;
	  	cnt++;
	    if(cnt%2==0)
	      {
	      	mid=mid->next;
		  }
	}
}
int mid_pop(int cnt)
{
	if(mid!=NULL)
	{         if(mid->prev!=NULL)
		mid->prev->next=mid->next;
		        if(mid->next!=NULL)
		     mid->next->prev=mid->prev;
		 cnt--;
		if(cnt%2!=0)
		{
			mid=mid->prev;
		 } 
		 else{
		 	mid=mid->next;
		 }
		 if(mid==NULL)
		 {
		 	head=NULL;
		 }
		 return cnt;
	}
}

void display()
{     if(mid!=NULL)
	cout<<mid->data<<" ";
}
int main()
{  int cnt=0;
    head=NULL,mid=NULL;
      for(int i=1;i<=4;i++)
      {
      	cnt=push(i,cnt);
      	  display();
	  }
	  
}
