#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[],int n){
    for (int i = 0; i < n; i++)
{
    int min=i;
    for (int j = i+1; j < n; j++)
    {
        if (arr[min]>arr[j])
        {
          min=j;
        }
    }
    if(min!=i){
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
//printing
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

}

main(){
int n;
cin>>n;
int arr[n];
// int min=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

selectionSort(arr,n);



return 0;
}