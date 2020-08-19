#include<bits/stdc++.h>
using namespace std;

int find(int si,int arr[],int n,int data)
{
       if(si==n)
        return -1;

      ind=find(si + 1, arr, n, data);

       if(ind!=-1)
        {
        return ind;
        } 
    
     else(arr[si]==data)
     {
          return  si;
     }
     return -1;
}