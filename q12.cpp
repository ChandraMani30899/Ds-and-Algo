//279
#include<bits/stdc++.h>
using namespace std;

int numSquares(int n)
{
    if(n==0)
    return 0;

    int minValue=INT_MAX;

    for(int i=1;i*i<=n;i++)
     {
         int ans=numSquares(n-i*i);
        minValue=min(minValue,ans);


     }
     return minValue+1;
}

int main()
{

 cout<<numSquares(12);

}