#include<iostream>
using namespace std;
#include "functions.cpp"
main(){
int n;
cin>>n;
int arr[n];
array_insertion(arr,n);
printArray(arr,n);

return 0;
}