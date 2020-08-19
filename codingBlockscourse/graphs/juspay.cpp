/*Q1. there is an array of n size starting from 0 to n-1. Each index value contain the next index of directed graph. there is
many entry point but single exit point. you hve to find the Cm from C1 and C2 such that Cm is point which is nearest to C1 and
C2.*/


#include<bits/stdc++.h>

int fun(vector<int>arr,int start,int dst)
{
   vector<int>a(arr.size(),-1);
             int i=start;
            int j=0;
             a[start]=0;          
 
  do{ 
       a[i]=a[start]+j;
             j++;
          i=arr[i];      
  }while(i!=-1 && a[i]==-1)

          i=arr[dst];
          a[dst]=-2;
        while(i!=-1 && a[i]!=-2)
        { 
              if(a[i]!=-1)n
              {
                  return i;
              }
              else{
                     a[i]=-2;
                     i=arr[i];
              }
        }  

       if(i==-1 || a[i]==-2)
       {
           return -1;
       }
   
}


int main()
{
    
}