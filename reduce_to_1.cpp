#include<bits/stdc++.h>
using  namespace std;
int dp[1000];
const int inf=(int)1e9;
int min(int a, int b)
{
    if(a<b)
     return a;
    return b; 
}
int reduce(int n)                                     // memorization meathod  is used here
{                                                     // top down approach
    if(n==1)
    {
        dp[1]=0;
        return dp[1];
    }
int q1=inf,q2=inf,q3=inf;
if(n%3==0)
{
    q1=1+reduce(n/3);
}
if (n % 2 == 0)
{
    q2 = 1 + reduce(n / 2);
}
q3 = 1 + reduce(n - 1);
dp[n]=min(q1, min(q2, q3)); 
return dp[n];
}

int reduceNo(int n)                              // Bottom up approch 
{                                               // to table fill
     dp[0]=0;
     dp[1]=0;
     dp[2]=1;
     dp[3]=1;

     for(int i=4;i<=n;i++)
      {
          int q1 = inf, q2 = inf, q3 = inf;
          if(i % 3 == 0)
          {
              q1 = 1 + dp[i / 3];
          }
          if (i % 2 == 0)
          {
              q2 = 1 + dp[i / 2];
          }
          q3 = 1 + dp[i - 1];
          dp[i] = min(q1, min(q2, q3));
      }
      return dp[n];
}
int main()
{  int n;
    memset(dp,-1,sizeof(dp));
    cout<<"Enter the Number to reduce :";
    cin>>n;
     cout<<"Number of steps are       :"<<reduceNo(n);
}