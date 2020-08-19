using namespace std;

int linearSearch(int si,int arr[],int n,int data)
{
    if(si==n)
    return -1;

    if(arr[si]==data)
    return si;

    else{
        return linearSearch(si+1,arr,n,data);
    }
}
int main()
  int arr[]={0,1,2,3,4};
  linearSearch(0,arr,5,3);
  return 0;
)