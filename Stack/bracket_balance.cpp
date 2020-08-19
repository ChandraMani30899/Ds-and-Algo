#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char>s;
	 char c;
	for(int i=0;i<6;i++)
	{
	    cin>>c;
        if(!s.empty())
		{
			if(s.top()=='{' && c=='}')
			   {
			     s.pop();
			   } 
			else if(s.top()=='[' && c==']')
			   {
			     s.pop();
			   } 
			else if(s.top()=='(' && c==')')
			   {
			     s.pop();
			   } 
		   else{
			      s.push(c);	
		   	   }
		   	   if(s.top()=='}' || s.top()==')' || s.top()==']')
		   	         {
		   	         		cout<<"\nbracket are not balanced";
		   	         		break;
						}
	    }
	    else{
	    	 if(c=='}'||c==')'||c==']')
	    	    {
	    	     	break;
				}
				else{
				   s.push(c);
				}
		    }
	}
	  if(s.empty())
	  {
	  	cout<<"\nbracket are not balanced";
	  }
	  else{
	  	cout<<"\nbracket are not balanced";
	  }
	
}
