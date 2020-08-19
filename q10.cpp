#include<bits/stdc++.h>
using namespace std;

bool subarray(int si,vector<int>&num,int total,int sum)
{
     if(sum==total)
         return true;
     if(sum>total || num.size()==si)
       return false;   

    bool include=subarray(si + 1, num, total, sum + a[si]);
    bool exclude=subarray(si + 1, num, total, sum);

    return include || exclude;
}

int main()
{
      vector<int>a(5);

    
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];
    }
    if(sum%2==0)
          {
                  cout<<subarray(0,a,sum/2,0);
          }
}