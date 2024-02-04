
#include "functions.h"
#include<iostream>
using namespace std;
main(){
int arr[100];
int n;
cin>>n;
// int arr[];
takeInput(arr,n);
int sum=0;
for (int i = 0; i < n; i++)
{
  sum=arr[i]+sum;
}
cout<<"The sum of the array is "<<sum<<endl;

// I have defined this function in the functions.h file so 
// we can use that functions in our other array codes 



return 0;
}