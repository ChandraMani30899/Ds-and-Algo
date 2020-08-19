#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],c[100],n,left=-1,right=-1;
     int currmax=0,max=INT_MIN;
    cin>>n;


    for(int i=0;i<n;i++)
     cin>>a[i];

     c[0]=a[0];

     for(int i=1;i<n;i++)
         c[i]=c[i-1]+a[i];

     
     for(int i=0;i<n;i++)
      {
          
          currmax = c[i];
          for (int j = i - 1; j >= 0; j--)
          {
              if (currmax < c[i] - c[j])
                  currmax = c[i] - c[j];
             }
             if(currmax>max)
              max=currmax;

      } 
     


     cout<<"Maximum subarray sum is :"<<max<<"\nElements are :";
 
    //  for(int i=left;i<=right;i++)
    //           cout<<a[i]<<" ";


            return 0;  
}