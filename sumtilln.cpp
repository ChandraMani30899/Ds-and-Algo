#include<bits/stdc++.h>
using namespace std;

int sumtillN(int n)
{  if(n==1)
     return 1;
 
     int sum;
     sum+=sumtill(n-1)+n;
     return sum;
}

int fact(int n)
{
    if(n==1 || n==0)
    return 1;


    int factorial;
    factorial=fact(n-1) * n;

    return factorial;
}

int power(int n,int p)
{
      if(p==0)
      return 1;

    int result;


    result=power(n,p-1)*n;
    return result;
}



void printDecreasing(int n)
{
   if(n==0)
   {
       cout<<n<<" ";
   }
  
   cout<<n<<" ";
   printDecreasing(n-1);
}

void printIncreasing(int n)
{
     if(n == 0)
      {
        cout << n << " ";
      }
      printIncreasing(n - 1);
      cout << n << " ";
}

int linearSearch(int arr[], int si, int n, int data)
{
     if(si==n)
     {
         return 0;
     }

     if(arr[si]==data)
     {
         return si;
     }
   int index = linearSearch(arr,si+1,n,data);  
   return index;
}

bool isSorted(int arr[], int si, int n)
{
     if(si==n-1)
     {
         return true;
     }

     if(arr[si]<=arr[si+1])
     {
         return false;
     }

     bool result;

     result=isSorted(arr,si+1,n);
     return result;
}

int lastIndex(int arr[], int si, int n, int data)
{   

      if(si==n)
      return -1;
      
      int index=lastIndex(arr,si+1,n,data);
        

        if(index==-1)
          {
               if(arr[si]==data)
                   return si;
               else return -1;        
        }

     else return index;
     
}


int fib(int n)
{

        if(n==0 || n==1)
            return n;


    int fibonacci=fib(n-1) + fib(n-2);

    return fibonacci;

}


int countBoardPath(int start,int end)
{
    if(start==end)
        return 1;

    if(start > end) 
     return 0;


     int count=0;

     for(int dice=1;i<=dice;i++)
     count+=countBoardPath(start + dice , end);

     return count;      
}

int countMazePath(int sr, int sc, int er, int ec)
{
    if(sr == er || sc == ec)
          return 1;

    if(sr > er || sc > ec)
              return 0;

   int count = countMazePath(sr+1,sc,er,ec) + countMazePath(sr,sc+1,er,ec) + countMazePath(sr+1,sc+1,er,ec);          

   return count;
}




int main()
{
        int n;
        cin >> n;
        sumtillN(n);
         return 0;
}