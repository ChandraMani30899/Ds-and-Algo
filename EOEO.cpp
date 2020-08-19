#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fun(ll ts,ll js,vector<vector<ll>>&dp)
{

   if(dp[ts][js]!=-1)
      {
          return dp[ts][js];
      }

   if(ts%2!=0 && js%2==0)
   {
       dp[ts][js]=1;

       return 1;

   } 
   if(ts%2==0 && js%2!=0)
   {
       dp[ts][js]=0;
       return 0;
   }

   if(ts%2!=0 && js%2!=0)
   {  dp[ts][js]=0;
       return 0;
   }

   if (ts % 2 == 0 && js % 2 == 0)
   {
       dp[ts][js]=fun(ts/2,js/2,dp);

       return dp[ts][js];
   }
}

int main()
{  ll t;
   cin>>t;

    while(t--)
    {
        ll ts,values=0;
        cin>>ts;
        vector<vector<ll>>dp(ts+1,vector<ll>(ts+1,-1));

        for(ll js=1;js<=ts;js++)
        {        
             
               values+=fun(ts,js,dp);
            
        }

        cout<<values;
    }  
  
  return 0;
}