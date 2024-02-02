#include<iostream>
using namespace std;


main(){
int n;
cin>>n;
int arr[n];

//bubble sort
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int temp=0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
    }
    }
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}




return 0;
}