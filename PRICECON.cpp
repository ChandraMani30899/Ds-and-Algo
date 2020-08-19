#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k,loss=0,z;
        cin>>n>>k;
    

        for(ll i=0;i<n;i++)
        {
           cin>>z;
           
         if(z>k)
         {
             loss+=(z-k);
         }
        
        }

        cout<<loss<<"\n";

    }

}