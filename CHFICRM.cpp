#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
     ll t;
     cin>>t;
     while(t--)
     {   ll n;
         cin>>n;
         queue<int>q;

          for(int i=0;i<n;i++)
             {
                 int x;
                 cin>>x;

                  q.push(x);
             }
         unordered_map<int,int>b;

          b[5]=0;
          b[10]=0;
          b[15]=0;

     
          while(!q.empty())
         {   if(q.front()==5)
             {
                   b[5]++;
                   q.pop();
             }

              else if(q.front()==10)
                {
                     if(b[5]==0)
                      { 
                           break; 
                      }
                  q.pop(); 
                  b[5]--;    
                  b[10]++;
                }

             else if(q.front()==15)
               {
                   if((b[10]>=1))
                     {
                          b[10]--;
                          b[15]++;
                        q.pop();
                     }
                   else if(b[5]>=2)
                      {
                          b[5]-=2;
                          b[15]++;
                          q.pop();
                      }  
                    else{
                        break;
                    }  
               }    
         }


         if(!q.empty())
          cout<<"NO";

        else cout<<"YES";

        cout<<endl;  
     }
  return 0;    
}