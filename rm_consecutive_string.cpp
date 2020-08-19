#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[1000];

    cin.getline(a,1000);
    int l=strlen(a);
  
    int j=0;

    for(int i=1;i<l;i++)
    {
        if(a[i]!=a[j])
           {
               j++;
               a[j]=a[i];
           }
    }
    a[j+1]='\0';
    cout<<a;
    return 0;
}