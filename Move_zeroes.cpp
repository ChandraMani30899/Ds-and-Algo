#include<bits/stdc++.h>
using namespace std;

void display(vector<int>a)
{
    for(int i=0;i<a.size();i++)
     cout<<a[i]<<" ";
     cout<<endl;
}
void moveZeroes(vector<int>& a) {
         int i=0;
        int j=0;
        
        for(int i=0;i<a.size();i++)
        {  cout<<i<<","<<j<<" ";
           if(a[i]!=0 && a[j]==0)
           {
            swap(a[i],a[j]);
           }
          if(a[j]!=0)
              j++;

            display(a);  
        }    
}
int main()
{
    vector<int>a={0,1,0,3,12};
     moveZeroes(a);    
     return 0;
}