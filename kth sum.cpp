#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];         
    }
       int x=0;
      i=0;
      j=n-1;
      sum = a[i] + a[j];
      if (sum == k)
      {
          count++;
      }
      while (i <= j)
      { 
       sum = a[i];   
           
          if (sum == k)
          {  
              count++;
          }
       if(sum<k)
        {
            i++;
        }   
      else if(sum > k)
         {
             sum[]
             j--;
         }

    }  
}