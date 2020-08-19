#include<bits/stdc++.h>
using namespace std;

void substring(string str,string ans="")
{
     if(str.length()==0){
         cout<<ans<<endl;
     }
    
    char c=str[0];
    str s=str.substr(1);
    
   substring(str,ans);
   substring(str,ans+ch);   

}2