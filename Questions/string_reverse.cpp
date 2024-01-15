#include<iostream>
#include<string.h>
using namespace std;
main(){

char arr[100];
cout<<"enter the strig: ";
cin>>arr;

int len=strlen(arr);

for (int i = len; i >=0; i--)
{
    /* code */
    cout<<arr[i];

}
return 0;
}