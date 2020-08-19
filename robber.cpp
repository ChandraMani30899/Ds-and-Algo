#include<bits/stdc++.h>
using namespace std;
    int rob(vector<int>& nums) {
        int dp[nums.size()+1];
        memset(dp,-1,sizeof(dp));
        return fun(nums,0,dp); 
        
    }
    int fun(vector<int>&sum,int si,int dp[])
    {  
     if(sum.size()<=si)
     {
         return 0;
     }
        if(dp[si]!=-1)
        {
            return dp[si];
        }
    int include=fun(sum,si+2,dp)+sum[si];
    int exclude=fun(sum,si+1,dp);

    if(include>exclude)
    {
     dp[si]=include;
         return include;
    }
    
           
    else {
         dp[si]=exclude;
        return exclude;
         } 
   }
