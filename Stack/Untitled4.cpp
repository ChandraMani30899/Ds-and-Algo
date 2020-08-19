#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	while(t--)
	{ int n,x=0,var;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>var;
			x=x^var;
		}
		cout<<x;
	}
}
