#include<iostream>
using namespace std;

int main()
{
    int n,prod=1,min;
    cin>>n;
    int a[i];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   min =a[0];
    for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
              prod*=a[i];

           if(a[i] < 0)
                 min=a[i];
        }   
        if(prod<0)
         {
             cout<<prod/min;
         } 
  cout<<prod;
}