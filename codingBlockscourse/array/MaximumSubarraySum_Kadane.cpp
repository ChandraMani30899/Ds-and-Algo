#include<bits/stdc++.h>
using namespace std;

int main()
{ 
   int a[100],n;

   cin>>n;
   for(int i=0;i<n;i++)

      cin>>a[i];

   int currsum=0,maxSum=INT_MIN;

   for(int i=0;i<n;i++)
     { 
                if(i==0 && a[0]<0)
                     continue;
              currsum+=a[i];

         cout<<currsum<<" ";
         if(currsum>maxSum)
         maxSum=currsum;          
     }


     cout<<"\n max sum of element is :"<<maxSum;
    return 0;
    //-4 1 3 - 2 6 2 - 1 - 4 - 7
}