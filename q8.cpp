#include<bits/stdc++.h>
using namespace std;

void fun(string str,string ans="")
{ 
     if(str.length()==0)
      cout<<ans<<endl;
      
      char c=str[0];
      string ros=str.substr(1);
        int chi=c-'0';
        c=chi+64;
      fun(ros,ans+c);

      if(str.length()>1)
      {
           char c2=str[1];
           int chi2=c2-'0';
           int num=chi*10+chi2;

           if(num<=26)
           {
               c2=num+64;
               string ros2=str.substr(2);
               fun(ros2,ans+c2);
           } 
      }  
 

}
int main()
{
    fun("ABC");
}