#include<bits/stdc++.h>
using namespace std;

int main()
{ int a[10],b[35000];
    memset(b,0,sizeof(a));

  for(int i=0;i<10;i++)
   {
       cin>>a[i];
   }
  for(int j=0;j<10;j++)
    {
        if(b[a[i]]<1)
            b[a[i]]++;
    }
   for(int i=0;i<10;i++)
    {  if(b[i]==1) 
       cout<<b[i]<<" ";
    }   
}