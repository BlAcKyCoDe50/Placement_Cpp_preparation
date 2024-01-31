#include<iostream>
using namespace std;

main(){
int n=5;
// cin>>n;
int arr[n]={11,12,23,14,15};
int flag=0;

// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];

// }

for (int i = 0; i < n; i++)
{
    if(arr[i]>arr[i+1])
    {
        flag=1;
        break;
    }
   
}
if (flag==0)
{
    cout<<"Sorted";
}
else{
    cout<<"Not Sorted";
}


// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" "<<endl;
// }



return 0;
}