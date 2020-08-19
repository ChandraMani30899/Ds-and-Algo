#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
    cin>>s;
    long long l=s.length();
      if(l%2==0)
      { 
        for(long long i=s.length()/2-1;i>=0;i--)
              {
                  cout<<s[i];
              }
        for(long long i=s.length()-1;i>=s.length()/2;i--)
               {
                   cout<<s[i];
               }      
      }
      else{
        
          for (long long i = s.length() / 2 - 1; i >= 0; i--)
          {
              cout << s[i];
          }
          cout<<s[s.length()/2];
          for (long long i = s.length() - 1; i >= s.length() / 2 + 1; i--)
          {
              cout << s[i];
          }
      }
	return 0;
}