//279
#include<bits/stdc++.h>
using namespace std;

int numSquares(int n,int dp[])
{
    if(n==0)
   {  dp[n]=0;
        return 0;
   }

   if(dp[n]!=-1)
   {
       return dp[n];
   }
    int minValue=INT_MAX;

    for(int i=1;i*i<=n;i++)
     {
         int ans=numSquares(n-i*i,int dp[]);
        minValue=min(minValue,ans);

     }
     dp[n]=minValue+1;
     return dp[n];
}
int numsquareDP(int n)
{
    int dp[n+1];
    dp[0]=0;
 
  for(int i=1;i<=n;i++)
  { 
      
      for(int j=1;)

  }

}

int main()
{ 
    int dp[12+1];
    memset(dp,-1,sizeof(dp));
 cout<<numSquares(12);

}