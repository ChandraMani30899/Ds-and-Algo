#include <bits/stdc++.h>

using namespace std;

int fun(int X, int N, int si)
{
    if (X == 0)
    {
        return 1;
    }

    if (X < 0 || pow(si, N) > X)
    {
        return 0;
    }

    int count = 0;
    int include = fun(X - pow(si, N), N, si + 1);
    int exclude = fun(X, N, si + 1);

    count = include + exclude;
    return count;
}

int main()
{
    cout<<fun(100,2,1);
}