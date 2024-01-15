#include<iostream>
using namespace std;
main(){
// int n;
// cin>>n;
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

for (int i = 0; i < 3; i++)
{
    for (int j  = 0; j < 3; j++)
    {
        /* code */
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}