#include<iostream>
#include "functions.cpp"
using namespace std;
main(){
int n;
cin>>n;
int arr[n];
array_insertion(arr,n);
int count=0;
int intial=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]==0)
    {
        count++;
    }
    else{
        cout<<arr[i]<<" ";
        intial++;
    }
}
for (int i = 0; i < count; i++)
{
    cout<<"0"<<" ";
}
return 0;
}