// find the missing no between the range?
// i/p: 6
// i/p: 1,3,5,6
// o/p: 2;

#include<iostream>
#include "functions.cpp"
using namespace std;
main(){
int n;
cin>>n;
int arr[n];
array_insertion(arr,n);
int arr1[n];
int range=0;
int sum=0;
for (int i = 0; i < n; i++)
{
    sum=sum+arr[i];
}
cout<<"Sum of array: "<<sum;



return 0;
}