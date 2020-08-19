#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int bit=31;bit>=0;bit--)
    {
        if((n>>bit)&1)
        {
            cout<<1;
        }
        else cout<<0;
 
    }
    cout<<endl;
    cout<<((-5>>31)&1);
    cout<<endl;
    // or
    bitset<3>bit(n);

    cout<<bit;
    cout << endl;
    // number of set bits -->count number of set bit in line 20;

   cout<<__builtin_popcount(n);

    return 0;
}