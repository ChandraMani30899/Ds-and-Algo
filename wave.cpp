#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3]={{1,4,7},{2,5,8},{3,6,9}};


   for(int col=0;col<3;col++)
   {
       if(col%2==0)
         {
             for(int row=0;row<3;row++)
               {
                   cout<<a[row][col]<<" ";
               }
         }
         else{
             for(int row=2;row>=0;row--)
                {
                    cout<<a[row][col]<<" ";
                }
               
         }
   }
    return 0;
}