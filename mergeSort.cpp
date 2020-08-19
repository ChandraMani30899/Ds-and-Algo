merge(int arr[],int start,int end)
{
    int n=end -start+1; 
     int temp[n];

    mid=(start+end)/2;

   int i=start;
   int j=mid+1;

   while(i<=mid && j<=end)
   {
       
   }
}
void mergeSort(int arr[],int start,int end)
{
     if(start>=end)
      return;

    int mid=(start + end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,start);

    merge(arr,start,end);

}