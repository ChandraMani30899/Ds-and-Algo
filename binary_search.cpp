#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n,int data)
{  int start=0;
  int end=n-1;
  int si=n;
  int mid;
    while(start<=end)
    {
      mid=(start+end)/2;
 
        if(arr[mid]==data)
            {
               if(mid<si)
                  {
                      si=mid;
                      end=end-1;
                  }
            }

        else if(arr[mid]>data)
                end=mid-1;

        else start=mid+1;  
    }
    if(si!=n)
    return si+1;
   
    return -1;
}

int main()
{

    int arr[]={1,2,2,2,4,5,6,7,8};
    int n=9;
    int data=2;
    cout<<binary_search(arr,n,data);
    return 0;
}