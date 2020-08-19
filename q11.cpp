#include<bits/stdc++.h>
using namespace std;

int sum(vector<int>&sum,int si,int s)
{   
     if(sum.size()<=si)
              return s;
    int include=sum(sum,si+2,s+sum[si]);
    int exclude=sum(sum,si+1,s);

    if(include>exclude)
     return include;

    else return exclude; 
}
int main(vector<int> &nums)
{   for(int i=0;i<n;i++)
       

    return sum(nums, 0, 0);
}