#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pattern;
    string text;
    cin>>pattern;
    cout<<"\n";
    cin>>text;
         int l=0,lower=-1,upper=-1;
    for(int i=0;i<text.length();i++)
       { 
              if(text[i]==pattern[l])
                {
                     if(l==0)
                      lower=l;
                      upper=l;
                      l++;        
                } 
                else{
                    lower=-1;
                    upper=-1;
                    l=0;
                }
              if(l==pattern.length())
               {
                   cout<<lower<<" "<<upper<<"\n";
                   l=0;
               }    
       }
}