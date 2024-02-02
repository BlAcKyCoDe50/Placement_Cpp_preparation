#include<iostream>
using namespace std;
int interpolationSearch(int arr[], int n, int data)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid = l+((data - arr[l])*(r-l) / (arr[r]- arr[l]));
        if(arr[mid]==data)
        {
            return mid;
        }  
        else if(data<arr[mid])
        {
             r = mid - 1;
        }
        else
        {
            l = mid+1;
        }
    }
    return -1;
}
int main()
{
    int n= 10;
    int arr[10] ={5,9,13,23,25,45,59,63,71,89};
    int data = 59;
    int res=interpolationSearch(arr, n, data);

    if(res!=-1)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
}