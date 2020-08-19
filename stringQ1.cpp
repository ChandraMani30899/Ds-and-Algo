// input : xaxbxxcdx
// output:abcdxxxx
#include<bits/stdc++.h>
using namespace std;

string fun(string str)
{
    if(str.length()==0)
             return str;

     char c=str[0];
     string sub=str.substr(1);
     string rec=fun(sub);

     if(c=='x')
      {
          return rec+'x';
      }
      else {
          return c + rec;
      }

}
int main()
{

    cout<<fun("xaxbxxcdx");
    return 0;

}