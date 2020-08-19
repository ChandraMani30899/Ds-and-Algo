#include<bits/stdc++.h>
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
 int main()
 {  int n;
     cin>>n;
     cout<<fun(n);
     return n;
 }