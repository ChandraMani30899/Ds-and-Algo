#include<bits/stdc++.h>
using namespace std;



int josephus(int n, int k)
{
   unordered_map<int,int>u;
   
   for(int i=1;i<=n;i++)
      {
          u[i]=1;
      }

     u=helper(n,u)
}

int main()
{
   cin>>t;

   cin>>t;

   while(t--)
   {
       int n,k;
       cin>>n>>k;
       josephus(n,k);
   }
}