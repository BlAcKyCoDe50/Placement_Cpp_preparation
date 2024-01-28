// given an array of integers and a sum,the task is to count all subsets of given array with sum equal to given sum

// o/p: count all the subsets of given array with sum equal to given sum.

#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int arr[n];

//taking input
for (int i = 0;i  < n;i ++)
{
 cin>>arr[i];   
}

//finding subsets
int sum=0;
int subset=0;
cin>>subset;
for (int i = 0; i < n; i++)
{
    sum=arr[i]+arr[i+1];
    if(sum==subset){
        cout<<"subset: "<<arr[i]<<" "<<arr[i+1];
    }
}
cout<<endl;
//printing array
for (int i = 0;i  < n;i ++)
{
 cout<<arr[i]<<" ";   
}






return 0;
}