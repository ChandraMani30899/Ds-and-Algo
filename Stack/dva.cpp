#include<iostream>
using namespace std;
int main()
{  
    int t;
    cin>>t;
   
    while(t--)
    {
    	int S[100001]={0};
		int N,var,i;
		cin>>N;
        if(N%2!=0)
        {  
            for(i=0; i<N; i++)
            {
               cin>>var;
                S[var]+=1;
            }
           for(int i=0;i<100000; i++)
          {
              
              if(S[i]==1)
              {
			  cout<<i<<endl;
               break;
			  }
              
           }   
        }
        else
        cout<<"-1"<<endl;
    }
   return 0;
       
}
