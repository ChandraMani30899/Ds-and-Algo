#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;
	int a[4]={11,14,7,21};
	s.push(a[0]);
	
	for(int i=1;i<4;i++)
	{   if(!s.empty())
		{
		  while(!s.empty() && a[i]>s.top())
		  {
		  	cout<<s.top()<<" "<<a[i]<<"\n";
		  	s.pop();
		  }
		  	s.push(a[i]);
	    }
		else{
            	s.push(a[i]);		
		}  
	}
		if(!s.empty())
		{
		   cout<<s.top()<<" "<<-1<<"\n";
		  	s.pop();	
		}
}
