#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,sum1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
          {  cin>>a[i];}
     
     sort(a,a+n);
     sum1=a[0]+a[1];
    for(int i=2;i<n;i++)
    {   sum+=sum1;
        sum1+=a[i];
    }
  cout<<sum;
  return 0;
}