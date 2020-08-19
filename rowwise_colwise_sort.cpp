#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[100][100];
   int n,m;

   cin>>m>>n;

   for(int i=0;i<m;i++)
   {
      for(int j=0;j<n;j++)
           cin>>a[i][j];   
   } 

  int i=0,j=n-1;

  int k;
  bool flag=false;
  cin>>k;

  while(i<m && j>=0)
    {
        cout<<a[i][j];
        if(a[i][j]==k)
           {
               flag=true;
               break;
           }
        else if(a[i][j]>k)
           {
               j--;
           }
        else 
           {
               i++;
           }             
    }
    if(flag==true)
     cout<<"found!";

   else cout<<"Not found!"; 

   return 0;  
}