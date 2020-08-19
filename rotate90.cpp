#include<bits/stdc++.h>
using namespace std;


int main()
{    int m,n;
  int a[100][100];
  
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
             cin >> a[i][j];
  }
     
for(int row=0;row<n;row++)
       {
           int sc=0;
           int ec=n-1;

           while(sc<ec)
           {
               swap(a[row][sc],a[row][ec]);
               sc++;
               ec--;
           }
       }

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<i;j++)
        {
               swap(a[i][j],a[j][i]);
        }
  }     
   

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
           cout<<a[i][j]<<", ";
     }
   cout<<"END";
     return 0;
}