#include<bits/stdc++.h>
using namespace std;
int memo[100][100]; 
int cnt=0;
int maxProfit(int arr[],int begin,int end,int year)
{
    if(begin > end)
    {
        return 0;
    }
    else{
        int q1=arr[begin]*year + maxProfit(arr, begin + 1 , end , year + 1);
        int q2=arr[end]*year + maxProfit(arr, begin  , end - 1 , year +1);
        
        int ans=max(q1,q2);
        return ans;
    }
}

int maxProfitMemoization(int arr[], int begin, int end, int year)
{
    if (begin > end)
    {
        return 0;
    }
    else if(memo[begin][end]!=-1)
     {
         return memo[begin][end];
     }
    else
    {  
        int q1 = arr[begin] * year + maxProfit(arr, begin + 1, end, year + 1);
        int q2 = arr[end] * year + maxProfit(arr, begin, end - 1, year + 1);

        int ans = max(q1, q2);
        memo[begin][end]=ans;
        return ans;
    }
}
int maxProfitDP(int arr[],int n)
{
    int dp[1000][1000]={};
    int year = n;
    for(int i=0;i<n;i++)
     {
        dp[i][i]=year * arr[i]; 
     }
     year--;
    for(int len=2;len<=n; len ++)
    {
        int start=0;
        int end=n-len;
        while(start<=end)
        {
            int endWindow=start+len-1;
            dp[start][endWindow]= max(
                arr[start]* year + dp[start+1][endWindow],
                arr[endWindow]* year + dp[start][endWindow-1] 
            );
           start++;
        }
         year--;
    } 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
                {
                    cout<<dp[i][j]<<" ";
                }
                cout<<"\n";
    }
    return dp[0][n-1];
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    
    }
   memset(memo , -1 , sizeof(memo) );
    //int max=maxProfit(arr , 0 , n - 1 , 1);
   //int max = maxProfitMemoization(arr, 0, n - 1, 1);
   int max = maxProfitDP(arr,n);
   cout << max <<"\t"<< cnt;
}