#include <bits/stdc++.h>
using namespace std;
bool fun(int n)
 {
     for(int i=3;i*i<=n;i++)
         {
             if(n%i==0)
                 {
                     return false;
                 }
                 
         }
         return true;
 }
int main() {
	int t;
    cin>>t;
    while(t--)
    {
       int n,m,p,0count;
       cin>>n>>m;
       int a[n][m];
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
               {
                    cin>>a[i][j];
               }
       } 
      cin>>p;
     for(int i=0;i<n;i++)
     {
         count=0;
         for(int j=0;j<m;j++)
         { 
             if(a[i][j]==2)
                {
                    count++;
                }
                else if(a[i][j]%2==0 || a[i][j]==1|| a[i][j]==0)
                {
                    count=0;
                }
              else{
                  if(fun(a[i][j]))
                    {
                        count++;
                    }
                    else count=0;
              } 
             if(count>=p)
                     {
                         sum++;
                     }  
             
         }
     } 
       cout<<sum<<"\n"; 
    }
	return 0;
}