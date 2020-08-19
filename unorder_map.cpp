#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int>h;

    h["India"]=140;
    h["Pak"]=67;
    h["Sweden"]=2;
    h["Norway"]=1;
    h["India"]=130;

    for(auto node:h)
    {
        cout<<node.first<<"->"<<node.second<<endl;
    }

    return 0;
}