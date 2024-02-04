#include<iostream>
using namespace std;
#include "functions.h"

int reverseArray(int arr[],int size){

 for (int i = size-1; i >=0; i--)
 {
    /* code */
    cout<<arr[i]<<" ";
 }
 

}


main(){

int arr[100];
int n;
cin>>n;

takeInput(arr,n);
reverseArray(arr,n);


return 0;
}