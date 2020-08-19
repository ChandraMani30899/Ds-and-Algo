#include<iostream>
using namespace std;
int fun(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"\n Enter 1st number :";
    cin>>a;
    cout<<"\n Enter the 2nd Number :";
    cin>>b;
    cout<<fun(a,b);
}