#include<iostream>
#include<string.h>
using namespace std;
main(){
// int n;
// cin>>n;
// int arr[n];

char a[100];
int n;
cin>>a;
n=strlen(a);
for (int i = 0; i < n; i++)
{
    if(a[i]>=97 && a[i]<=122){
        a[i]=a[i]-32;
        cout<<a[i];
    }
}


return 0;
}