#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	 int temp=a;
      a=b;
      b=temp;
}
void check2(int *p,int n)

{  int i=0;
while(i<=n)
     { 
            if((i*2+1 <=n  && p[i]<p[i*2+1]) || (i*2+2 <=n  && p[i]<p[i*2+2]))
			{     if(i*2+2 <=n && p[i*2+1]>p[i*2+2])
			         {
					 swap(p[i],p[i*2+1]);
				     i=	i*2+1;
				    }
				    else if(i*2+2 <=n && p[i*2+1]<p[i*2+2]){
				      swap(p[i],p[i*2+2]);	
			          i=i*2+2;
					}
					else break;
			}
	 }
}
void check(int *p,int i)
{
    for(int j=i/2; j>=0 && i>0 ; j = j / 2)
         {
              if(p[i]>p[j])
                  {
                     swap(p[i],p[j]);
                  }
             i=j;    
         }
}

int main()
{
   int a[5];
   int n=4;
   for(int i=0;i<5;i++)
     {
         cin>>a[i];
         check(a,i);
     }
       
   for(int i=0;i<=n;i++)
      {
	       cout<<a[i]<<"\t";
           a[i]=a[n];
		   n--;
		   check2(a,n);    
       }
     return 0;
}
