#include<iostream>
using namespace std;
double average (int a[],int n)
{
int sum=0,j;
for (j=0;j<n;j++)
{
    sum+=a[j];
}

return (double)sum/n;
}

int main()
{
    int i,n,avg;
    cin>>n;
    
     for (i=0;i<n;i++)
     {
     cin>>a[i];    
     }

double avg=average(a,n);
cout<<avg;
return 0;
}