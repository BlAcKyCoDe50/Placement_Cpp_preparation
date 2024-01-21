#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int arr[n];
int temp=0;

for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    temp=arr[i];
    arr[i]=arr[n-1];
    arr[i+1]=temp;
    for (int j = i; j < n-1; j++){
        arr[j]=arr[j+1];
        // break;
        // cout<<"inside j"<<" ";
    }
    
}
// cout<<"outside";
cout<<endl;
for (int i = 0; i < n; i++)
{
    // cout<<"printing";
    cout<<arr[i]<<" ";
}
return 0;
}