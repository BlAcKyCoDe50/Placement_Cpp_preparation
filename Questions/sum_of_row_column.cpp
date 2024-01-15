#include<iostream>
using namespace std;
main(){

cout<<"enter the no of column: "<<endl;
int col;
cin>>col;

cout<<"enter the no of row's: "<<endl;
int rows;
cin>>rows;
int arr [rows][col];

for (int i = 0; i < rows; i++)
{
    /* code */
    for (int j = 0; j < col; j++)
    {
        /* code */
        cout<<"enter the "<<i<<","<<j<<" "<<"element ";
        cin>>arr[i][j];
    }
    
}
int rowSum=0;
int colSum=0;

for (int i = 0; i < rows; i++)
{
    /* code */
    for (int j = 0; j < col; j++)
    {
        /* code */
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    
}

for (int i = 0; i < rows; i++)
{
    /* code */
    for (int j = 0; j < col; j++)
    {
        /* code */
       rowSum=rowSum+arr[i][j];
    }
    cout<<endl;
    
}

for (int i = 0; i < rows; i++)
{
    /* code */
    for (int j = 0; j < col; j++)
    {
        /* code */
        colSum=colSum+arr[i][j];
    }
    cout<<endl;
    
}
cout<<"Row sum: "<<rowSum<<endl;
cout<<"Column sum: "<<colSum;

return 0;
}