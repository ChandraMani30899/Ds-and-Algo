#include<bits/stdc++.h>
using namespace std;
void binary_search(int a[],int n)
{  
      int start=0;
      int end =n-1;
      int k;
      
     
      cout<<"\n Enter the element your want search :";
      cin>>k;
    while(start<=end)
    {
       int mid=(start+end)/2;

          if(a[mid]==k)
          {
              cout<<k<<" is found at poistion "<<mid+1;
              break;
          }
          else if(a[mid]>k)
           {
               end=mid-1;
           }
          else start=mid+1;  
    }
       
    if(start>end)
    {
        cout<<"key is not present";
    }     
}
int main()
{
    int a[10]={1,2,3,4,5,6,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);

    binary_search(a,n);   
    return 0;  
}