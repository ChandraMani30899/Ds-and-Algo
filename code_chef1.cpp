#include<bits/stdc++.h>
using namespace std;


typedef long long ll;


ll fun1(ll n)
 {
        return 0.05*(n-250000);       
 }

 ll fun2(ll n)
  {
      ll sum = fun1(500000)+(0.1 * (n - 500000));

      return sum;
  }

  ll fun3(ll n)
{
    ll sum = fun2(750000) + (0.15 * (n-750000));
     return sum;
}

ll fun4(ll n)
 {
     ll sum = fun3(1000000)+ (0.2 * (n - 1000000) );
      return sum;
 }

 ll fun5(ll n)
{
    ll sum  = fun4(1250000) + (0.25 * (n-1250000));
    return sum;
}

ll fun6(ll n)
{
 
  ll sum =fun5(1500000) + (0.30 * (n-1500000));
   return sum;
}

int main()
{
   ll t;

   cin>>t;

   while(t--)
   { ll n;
     
     cin>>n;
 
    if(n<=250000)
      {
          cout<<n<<"\n";
      }
    else if(n>250000 && n<=500000)
        {       
                   cout<<n-fun1(n)<<"\n";
        } 
     
     else if(n>500000 && n<=750000)
     {
        
         cout << n - fun2(n) << "\n";
       }
    else if(n>750000  && n<1000000)
    {
    
        cout << n - fun3(n) << "\n";
            }
    else if(n>1000000 && n<=1250000)
    {
        cout << n - fun4(n) << "\n";
             } 
    else if(n>1250000 && n<=1500000)
    {
        
        cout << n - fun5(n) << "\n";
              }   
     else{

         cout << n - fun6(n) << "\n";
     }                       

   }
   return 0;
}