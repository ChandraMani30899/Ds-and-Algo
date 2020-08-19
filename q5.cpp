// reach n*m from 0,0 

#include<bits/stdc++.h>
using namespace std;

int fun(int i,int j,int n,int m)
{
      if(i==n && j==m)
       return 1;

      if(i>n || j>m)
       return 0;

      int count=0;

      count=fun(i+1,j,n,m) + fun(i,j+1,n,m) + fun(i+1,j+1,n,m); 
      return count; 
}
int main()
{
    cout<<fun(0,0,2,2);
    return 0;

}