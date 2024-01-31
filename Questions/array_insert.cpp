//write a program to insert an element in an array at given position. If the position where the element is to be inserted is greater than the 
//size of the array then display "invalid input".

// i/p: size,index,element


#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int arr[n];
int index;
cin>>index;
int element;
cin>>element;
// if (index > n-1)
// {
//     cout<<"invalid input";
// }
for (int i = 0; i < n; i++)
{
    if (i==index)
    {
        arr[i]=element;
    }
    else{
        cout<<"invalid input";
        break;
    }
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}