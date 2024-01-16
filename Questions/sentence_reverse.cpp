#include<iostream>
#include<string.h>
using namespace std;
main(){
int length=20;
char arr[length];
cin.getline(arr,length);

int len=strlen(arr);

for (int i = len; i >=0; i--)
{
    /* code */
    cout<<arr[i];
}



return 0;
}