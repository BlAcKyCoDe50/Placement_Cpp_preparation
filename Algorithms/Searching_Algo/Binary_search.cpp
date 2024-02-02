
//for performing this search: array should be in sorted order
// it has 3 cases: 
    // 1. mid==data
    //     return data;
    // 2.data<mid
    //     right= mid-1
    //    3.data>mid
    //       left=mid+1;
#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int data){
    int left=0;
    int right=n-1;
    int mid=left+right/2;
    while(left<=right){
        if (arr[left]==data)
        {
            return left;
        }
        if (arr[right]==data)
        {
            return right;
        }
        if (arr[mid]==data)
        {
            return mid;
        }
        if (data<mid)
        {
            right=mid-1;
        }
        if (data>mid)
        {
            left=mid+1;
        }

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
int data=0;
cout<<"Enter the element for searching: "<<endl;
cin>>data;

cout<<"Element found at index: "<<binarySearch(arr,n,data);
return 0;
}