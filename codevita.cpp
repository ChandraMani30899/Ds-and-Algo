#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
       cin.tie(NULL);
        ll t;
   cin>>t;
   while(t--)
   { 
       ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
      stack<ll>s;
      stack<ll>s1;
      stack<ll>s2;

      for(ll i=0;i<n;i++)
      {
          if(a[i]%3==0)
            s.push(a[i]);

          else if(a[i]%3==1)
           s1.push(a[i]);

           else s2.push(a[i]);  
      }

      if((s.size()==0 && s1.size()!=0 && s2.size()!=0) || (s.size()>s1.size()+s2.size()+1))
         {
             cout<<"No\n";
             continue;
         }
      cout<<"Yes\n";  
  }


    return 0;


}