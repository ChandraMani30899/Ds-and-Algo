#include<bits/stdc++.h>
using namespace std;

void inseration_sort(int a[],int n)
{

   for(int i=1;i<n;i++)
   {
         int e=a[i];
          int j=i-1;
         while(j>=0 && a[j]>e)
           {
               a[j+1]=a[j];
               j--;
           }
           a[j+1]=e;
   }

   for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
}

int main()
{
    int a[10]={2,1,6,4,7,3,5,8,9,0};
    int n=sizeof(a)/sizeof(a[0]);

    inseration_sort(a,n);
}