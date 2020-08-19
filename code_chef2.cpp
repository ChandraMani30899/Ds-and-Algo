#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{  
    ll t;
    cin>>t;
    while(t--)
    {   ll n,a=0,b=0;
        string s;
        cin>>n;
        cin>>s;
         ll i=0;
        for(i=0;i<2*n;i++)
         {
             if(i%2==0)
              {
                  if(s[i]=='1')
                        a++;

                  if(a > b)
                   {
                       if (a <= (b + (2 * n - (i + 1)) / 2 + 1))
                             continue;
                       else break;      
                   }
                     
              }

             else
             {
                 if (s[i] == '1')
                         b++;

                 if(a==b)
                     continue;

                  else if(a > b )
                    {
                          if(a <= (b +(2*n - (i+1))/2))
                               continue;

                          else break;     

                    }
               else
                    {

                   if (b <= (a + (2*n - (i + 1)) / 2))
                       continue;

                   else
                       break;
                    }     
             }             
         } 
           if(a==b)
            cout<<2*n<<"\n";
           
           else cout<<i+1<<"\n"; 
     }
     return 0;
}