#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX2(a, b) (a > b ? a : b);
int dp[1000000];
int fun(int n)
{
    dp[0]=0;
    dp[1]=1;
    else if (dp[n] != -1)
    {
        return dp[n];
    }
    else
    {
        int sum = fun(n / 2) + fun(n / 3) + fun(n / 4);
                  for(int i=2;i<=n;i++)
                  {
                      if(dp[i]!=-1)
                      {
                         dp[i]=MAX2(i,) 
                      }
                  }
        dp[n] = MAX2(n, sum);
        return dp[n];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        cout << fun(n) << "\n";
    }
    return 0;
}