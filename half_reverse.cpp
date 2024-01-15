#include<iostream>
using namespace std;
main(){
int n=6;
// cin>>n;
int arr[n]={1,2,3,4,5,6};
int half=n/2;
int left=half;
int right=n-1;

while (left<right)
{
    /* code */
    int temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;
    left++;
    right--;


}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}



return 0;
}