//Rate-maze with multiple jumps

/*
IF destination is reached
    print the solution matrix
ELSE
    mark current cell in solution matrix as 1
    Move forward/jump (for each valid steps) in horizontal direction
    Recursively check if this move leads to a solution
    ELSE move down and check if this move leads to a solution
    IF none of the above solutions work then unmark this cell as o 
    (BACKTRACK) and return false


*/

#include<iostream>
using namespace std;
main(){
// int n;
// cin>>n;

int arr[4][4]={9,0,0,0,2,6,0,0,0,7,0,0,0,5,4,3};
int rpos=arr[0][0];
arr[0][0]=1;
for (int i = 0; i < 4; i++)
{
    for(int j=0;j<4;j++){
    
    
    if (arr[i][j+1]>0)
    {
        rpos=arr[i][j+1];
        arr[i][j+1]=1;
    }
    else if(arr[i+1][j] > 0){
        rpos=arr[i+1][j];
        arr[i+1][j]=1;
        }
    
    else if(arr[i][j+1]<=0 && arr[i+1][j] <= 0){
        // rpos=
    }
    }
}

for (int i = 0; i < 4; i++)
{
    for (int k = 0; k < 4; k++)
    {
        cout<<arr[i][k]<<" ";
    }
    cout<<endl;
    
}



return 0;
}