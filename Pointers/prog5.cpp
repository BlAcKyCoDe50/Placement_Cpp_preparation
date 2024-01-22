#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int arr[n];
int zcount=0;
int ocount=0;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if (arr[i]==0)      
    {
        zcount++;
    }
    
}


// for (int i = 0; i < zcount; i++)
// {
//     cout<<"0"<<" ";
// }
// for (int i = 0; i < ocount; i++)
// {
//     cout<<"1"<<" ";
// }

// another method

for (int i = 0; i < zcount; i++)
{
    arr[i]=0;
}
for (int i = zcount; i < n; i++)
{
    arr[i]=1;
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}






return 0;
}