#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n,k;
    int a[100];

    cin>>n;

    for(int i=0;i<n;i++)
     cin>>a[i];
 
    cin>>k;
    int i=0;
    int j=n-1;

    while(i<j)
    {
          if(a[i]+a[j]==k)
              {
                  cout<<a[i]<<" "<<a[j]<<" is a pair\n";
                    i++;
                    j--;
                
              }
          else if(a[i]+a[j]>k)
                      {
                          j--;
                      }
         else i++;          
    }

    if(i==j)
     {
         cout<<"\n No such pair is available ";
     }
    return 0;
}