#include<bits/stdc++.h>
using namespace std;

void possible(string str,string ans="")
{
          if(str.length()==0)
            {
                cout<<ans<<endl;
                return;
            }

    for(int i=0;i<str.length();i++)
     {  char c=str[i];
        string ros=str.substr(0,i)+str.substr(i+1);
        possible(ros,ans+c);                            
     }  
}
int main()
{
    possible("abc");
    return 0;
}