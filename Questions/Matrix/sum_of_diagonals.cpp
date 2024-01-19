#include<iostream>
using namespace std;

main(){

int row,col,size;
cin>>size>>row>>col;
int arr[row][col];
cout<<"enter the values"<<endl;
for (int i = 0; i < row; i++)
{
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}

//print matric
for (int i = 0; i < row; i++)
{
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


int sum_left=0;
int sum_right=0;
for (int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if (i == j) {
                sum_left += arr[i][j];
            }
            if ((i + j) == size - 1) {
                sum_right += arr[i][j];
            }
        }
    }
int diff_between_sum;
if (sum_left>sum_right)
{
    diff_between_sum=sum_left-sum_right;
}
else{diff_between_sum=sum_right-sum_left;}

cout<<"Difference between sum of its diagonals is: "<<diff_between_sum;

}

