#include<bits/stdc++.h>
using namespace std;

bool sort(int si,int arr[],int n)
{
        if(si==n-1)
          return true
        
         
            if(arr[si]>arr[si+1])
                 return false;

            else{
                 return  sort(si+1,arr,n);
                 }
}
int main(){
  int arr[]={0};
  cout<<sort(0,arr,1);
  return 0;
}