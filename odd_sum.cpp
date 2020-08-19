#include<bit/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
  pref=0;
    for(int i=0;i<n;i++)
    {
        pref+=a[i];
        pref=abs(pref);
        
    }  
}