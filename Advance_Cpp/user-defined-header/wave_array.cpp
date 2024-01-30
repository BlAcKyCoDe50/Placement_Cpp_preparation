/*
    Q: Wave_array
    sample i/p: 2,4,7,8,9,10
    sample o/p: 4,2,8,7,10,9
*/
#include<iostream>
#include "functions.cpp"
using namespace std;

main(){
int n;
cin>>n;
int arr[n];
array_insertion(arr,n);
// cout<<"inserted";
for (int i = 0; i < n; i++)
{
    for (int j = 1; j < n; j=i+1)
    {
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       i=j+1;
       
    }  
}
printArray(arr,n);
// cout<<"End";
return 0;
}