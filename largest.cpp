#include<iostream>
#include<cstring>
using namespace std;

int main()
{  int n,len,large=0;
    char a[1000];
    char largest[1000];
    cin>>n;
       fflush(stdin);
    for(int i=0;i<n;i++)
      {
          cin.getline(a,1000);
          len=strlen(a);
          if(large<len)
          {
              large=len;
              strcpy(largest,a);
          }
      } 

      cout<<large<<largest;
    return 0;
}