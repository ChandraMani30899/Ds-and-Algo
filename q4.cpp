#include<bits/stdc++.h>
using namespace std;

int countBoardPath(int start,int end)
{

    if(start==end)
     return 1;

    if(start>end)
     return 0;

    int count =0;

    for(int i=1;i<=6;i++)
    {
        count+=countBoardPath(start+i,end);
    }  
    return count;
}
int main()
{
    cout<<countBoardPath(0,10);
}