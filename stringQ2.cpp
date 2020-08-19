// input :
//ouput  :

#include<bits/stdc++.h>
using namespace std;

string fun(string str)
{
     if(str.length()==0)
          {
             return str;
          }
      string c=str.substr(0,2);
      string sub=str.substr(1);
      string rec=fun(sub);

      if(c=="pi")
      {
          return "3.14"+rec;
      } 

      else{

          return 
      }   

}

int main()
{
    cout<<fun("xxpiixxippix");
        return 0;
}