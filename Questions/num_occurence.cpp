#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int arr[n],arr2[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int count=0;
arr2[n]=arr[n];
for (int i = 0; i < n; i++)
{
    arr2[i]=arr[i];
}
for (int i = 0; i < n; i++)
{
   if (arr[i]==arr2[i])
   {
    // cout<<"element: "<<arr[i];
    count++;
    break;
   }
}
// cout<<count;
if (count>1)
{
    cout<<"true";
}
else{
    cout<<"false";
}
}