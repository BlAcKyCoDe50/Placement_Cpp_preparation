#include<iostream>
using namespace std;
main(){
int n=5;
int arr[5]={10,20,30,40,50};

// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }


//rotation_1
int d=1;
// cin>>d;
int temp[d];
for (int i = 0; i < d; i++)
{
    temp[i]=arr[i];
}

for (int i = 1; i < n; i++)
{
    arr[i-d]=arr[i];
}







//printing: 
cout<<"Original Array: ";
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"temp array: \n";

for (int i = 0; i < d; i++)
{
    cout<<temp[i]<<" ";
}

return 0;
}