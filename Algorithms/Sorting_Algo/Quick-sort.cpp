#include<iostream>
#include <algorithm>
using namespace std;

void  quickSort(int arr[],int n){
    int j=arr[n-1];
    int i=j-1;
    int pivot=arr[n-1];
    while (j<=pivot)
    {
        if(arr[j]>arr[pivot]){
            j++;
        }
        else if (arr[j]<=arr[pivot])
        {
            i++;
            swap(arr[i],arr[j]);
        }
        
    }

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

    
}

main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
quickSort(arr,n);
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }



return 0;
}