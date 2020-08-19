#include<bits/stdc++.h>
using namespace std;

bool comp(string s1,string s2)
{
    return s1+s2<s2+s1;
}
int main()
{
    int n;
    cin>>n;
   string s[n];

   for(int i=0;i<n;i++)
     cin>>s[i];

     sort(s,s+n,comp);
  
   for(int i=0;i<n;i++)
    cout<<s[i];
    return 0;
}