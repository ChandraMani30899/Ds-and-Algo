#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],n,left=-1,right=-1;
     int currmax=0,max=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++)
     cin>>a[i];

  
     for(int i=0;i<n;i++)
     {
         for(int j=i;j<n;j++)
           {    
                 currmax=0;
               for(int k=i;k<=j;k++)
                    currmax+=a[k];

               if(currmax>max)
               {
                   max=currmax;
                   left=i;
                   right=j;
               }     
           }
     }

     cout<<"Maximum subarray sum is :"<<max<<"\nElements are :";
 
     for(int i=left;i<=right;i++)
              cout<<a[i]<<" ";


            return 0;  
}