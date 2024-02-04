#include<iostream>
using namespace std;
#include "functions.h"

bool search(int arr[],int size,int key){

for (int i = 0; i < size; i++)
{
    if (arr[i]==key)
    {
        /* code */
        cout<<"Element is present at index "<<i<<endl;
        return true;
    }
    
    }
    return false;
}
main(){
int arr[100];
int n;
cin>>n;
// int arr[n];

takeInput(arr,n);
cout<<"Enter the element you want to search: "<<endl;
int key;
cin>>key;
bool result=search(arr,n,key);
if(result){
    // cout<<"Element is present "<<endl;
}
else{cout<<"Element is not present "<<endl;}

// printArray(arr,n);

return 0;
}