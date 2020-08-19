#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count=0;
	cin>>n;
	char c[n];
	int t[26],a[26];
	 memset(t,0,sizeof(t));
	   for(int i=0;i<n;i++)
	      {   cin>>c[i];	         
		  }   
    for(int i=0;i<n;i++)
	{
	       t[c[i]-'a']++;       	
	}
	
	a[0]=t[0];
	for(int i=1;i<26;i++)
	{
	     a[i]=t[i]+a[i-1];
	}
	for(int i=0;i<n;i++)
	  {
	  	cout<<a[25]-a[c[i]-'a']<<" ";
	  }
}
