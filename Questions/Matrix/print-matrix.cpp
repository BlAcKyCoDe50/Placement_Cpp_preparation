#include<iostream>
using namespace std;

main(){
int row,col;
cin>>row>>col;
int arr[row][col];
cout<<"enter the values"<<endl;
for (int i = 0; i < row; i++)
{
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}

for (int i = 0; i < row; i++)
{
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}