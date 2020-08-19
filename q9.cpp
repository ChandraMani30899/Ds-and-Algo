#include<bits/stdc++.h>
using namespace std;

string s[]={".","#","abc","def","ghi","jkl","mno","pqrs","tuvw","xyz"};


void printKeypad(string str,string ans="")
{
  if(str.length()==0)
   {
       cout<<ans<<endl;
       return;
   }

    char c=str[0];
    string ros=str.substr(1);
    string key=s[c-'0'];
    for(int i=0;i<key.length();i++)
    { 
        char c=key[i];
        printKeypad(ros,ans+c);
    }
}

int main()
{
   printKeypad("234");


   return 0;
}