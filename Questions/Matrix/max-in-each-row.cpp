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
int max=0;
cout<<"Maximum elements are: ";
//finding max element
for (int i = 0; i < row; i++)
{
    for(int j=0;j<col;j++){
       if (arr[i][j]>max)
       {
       
        max=arr[i][j];
       }
       else{
        max=arr[i][j+1];
        
       }
}
    cout<<max<<" ";
    
}
return 0;
}