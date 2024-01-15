#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int arr[n];
    int sum=0;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


for (int i = 0; i < n; i++)
{
    sum=sum+arr[i];
}
cout<<"Sum of the array is: "<<sum;
int avg=sum/n;
cout<<"Avg of the array is: "<<avg;
// return 0;



return 0;
}