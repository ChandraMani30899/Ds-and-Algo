#include<bits/stdc++.h>
using namespace std;
/*void heapify(int a[],int n,int i)
{
    int r=2*i+2;
    int l=2*i+1;
    int min =i;

    if(l < n &&  a[l] < a[min])
           min = l;

    if (r < n && a[r] < a[min])
           min = r;
    if(min!=i)
     {
         swap(a[min],a[i]);
         heapify(a,n,min);
     }
}*/

void heapify(int arr[], int n, int i)
{
    int largest = i;   // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);

    
    for (int i =n-1; i>=0;i--)
    {
        swap(arr[0], arr[i]);
        
        heapify(arr, i, 0);
    }
}

int main()
{
    int a[]={40,30,25,21};
    int n=4;
    heapsort(a,4);

 for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";     
  }
}