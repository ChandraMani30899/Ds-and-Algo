#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={1,2,3};
     int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

