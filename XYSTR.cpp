#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
   ll t;
   cin>>t;

   while(t--)
   {
       string s;
         ll pair=0;
       cin>>s;
    
       for(ll i=0;i<s.length()-1;i++)
       {
           if((s[i]=='x' && s[i+1]=='y')|| (s[i]=='y' && s[i+1]=='x'))
                   {
                         i++;
                         pair++;
                   }
             
       }

       cout<<pair<<"\n";
   }
   return 0;
}