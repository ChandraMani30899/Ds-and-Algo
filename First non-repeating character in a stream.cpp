#include<bits/stdc++.h>
using namespace std;
struct node 
{
    char x;
    node *next;
    node(char c)
    {
        x=c;
        next=NULL;
    
    }
}*root,*nr,*tail;

void insert(char c)
{   node *newnode=new node(c);
      if(root==NULL)
      {
          root=newnode;
          tail=newnode;
          nr=newnode;    
      }
      else{
        tail->next=newnode;
         tail=newnode;
      }
     
}
int main()
{
        int t;
        cin>>t;
        while(t--)
        {    int n;
             char c;
             bool flag=false;
             cin>>n;
             unordered_map<char,int>um;
              root=NULL;
              nr=NULL;
             for(int i=0;i<n;i++)
             {
                  cin>>c;
                  insert(c);
                  if(um.find(c)==um.end())
                  {
                      um.insert(make_pair(c,1));
                  }
                 
                    else um[c]++;
                   while(nr!=NULL)
                   {
                       if(um[nr->x]==1)
                           {
                               cout<<nr->x<<" ";
                               flag=true;
                               break;
                           }
                           nr=nr->next;
                   }
                   if(flag==false)
                   {
                       cout<<"-1 ";
                   }
                   if(nr==NULL)
                   {
                       nr=tail;
                   }
                   flag=false;
             }       
             cout<<"\n";
     }
}
