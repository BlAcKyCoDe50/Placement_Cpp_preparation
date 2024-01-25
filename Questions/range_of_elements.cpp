#include<iostream>
using namespace std;
//sum of the max and min element in the array.
int max(int arr[],int n){
int max=arr[0];
for (int i = 0; i < n; i++)
{
    if(arr[i]>max){
        max=arr[i];
    }
    
}

  return max;
}

//function to find minimum
int min(int arr[],int n){
int min=arr[0];
for (int i = 0; i < n; i++)
{
    if (arr[i]<min)
    {
        min=arr[i];
        
    }
    // cout<<"min: "<<min;
    
}
return min;
}


main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int m=max(arr,n);
int mi=min(arr,n);

cout<<"Difference: "<<m-mi;

return 0;
}
