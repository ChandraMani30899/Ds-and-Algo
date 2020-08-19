#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n)
{

   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
         {
             if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
         }
   }

   for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
}

int main()
{
    int a[10]={2,1,6,4,7,3,5,8,9,0};
    int n=sizeof(a)/sizeof(a[0]);

    bubble_sort(a,n);
}