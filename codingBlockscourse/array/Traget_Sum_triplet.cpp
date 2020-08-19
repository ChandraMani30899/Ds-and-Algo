#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

int main()
{
  ll n;
  cin>>n;

  ll a[n];
  for(ll i=0;i<n;i++)
      cin>>a[i];
   
    ll target;
    cin>>target; 
  
  for(ll k=0;i<n-1;i++)
  {
        int i=k+1;
        int j=n-1;

      while(i<j)
      {
          if (a[i] + a[j] + a[k] == target)
          {
              cout << a[k] << "," << a[i] << " and "<<a[j]<<endl;
              i++;
              j--;
          }
          else if (a[i] + a[j] + a[k] > target)
          {
              j--;
          }
          else
              i++;
      }   
  }

}