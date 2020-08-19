#include<bits/stdc++.h>
using namespace std;
stack<int>s;
void sort1(int x)
{
	if(s.top()>x)
                 {
                     int y=s.top();
                       s.pop();
                     sort1(x);  
                      s.push(x);
                      s.push(y);
                
                 }
}
void sort()
{
   if(!s.empty())
      {
          int x=s.top();
          s.pop();
           sort();
          if(!s.empty())
           {   
           		
               if(s.top()>x)
                 {
                     int y=s.top();
                       s.pop();
                     sort1(x);  
                      s.push(x);
                      s.push(y);
                
                 }
                else{
                
                     s.push(x);
                 }
           }
            else{
                
                     s.push(x);
                 }
      }
   
}
int main()
{
	s.push(11); // 11 2 32 3 41
	s.push(2);
	s.push(32);
	s.push(3);
	s.push(41);
	sort();
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
	}
