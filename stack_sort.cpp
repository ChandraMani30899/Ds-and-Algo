#include <bits/stdc++.h>
using namespace std;
stack<int>s;
void  sorted_stack()
{
    if (!s.empty())
    {
        int x = s.top();
        s.pop();
        sorted_stack();
        if (s.empty())
        {  cout<<"Hi"<<x<<"\n";
            s.push(x);
        }
        else if (x >= s.top())
        {     cout<<" hi2\n";
              s.push(x);
        }
        else if (x < s.top())
            {
                int y = s.top();
                s.push(x);
                sorted_stack();
                s.push(y);
            }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n,a;
       cin>>n;
       for(int i=0;i<n;i++)
       {
          cin>>a;
          s.push(a);
       }
        sorted_stack();
        while(!s.empty())
        {
            cout<<s.top()<<" ";
            s.pop();
        }
    }
    return 0;
}