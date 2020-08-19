#include<bits/stdc++.h>
using namespace std;

int countBoardPath(int start,int end,int dp[])
{

    if(start==end)
       { dp[start]=1;
           return 1;
       }

    if(start>end)
     return 0;

     if(dp[start]!=-1)
      return dp[start];

    int count =0;

    for(int i=1;i<=6;i++)
    {
          count+=countBoardPath(start+i,end,dp);
    }  
     dp[start]=count;
    for(int i=1;i<=10;i++)
     {
         cout<<dp[i]<<"   ";
     } 
     cout<<"\n**************************************\n";
    return count;
}

int countBoardPathDP(int start,int end)
{ int dp[end +1 ];
  dp[end]=1;

  for(int i=end-1;i>=0;i--)
    {
        dp[i]=0;

        for(int dice=1;dice<=6;i++)
          {
               if(dice +i >10)
                   break;

                dp[i]+=dp[dice+i];
          }
    }
    return dp[0];
}


int main()
{   int dp[11];
    memset(dp,-1,sizeof(dp));   
    cout<<countBoardPath(0,10,dp);
}