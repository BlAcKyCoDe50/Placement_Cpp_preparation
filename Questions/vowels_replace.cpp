#include<iostream>
#include<string.h>
using namespace std;
main(){
// int n;
// cin>>n;
// int arr[n];

char st[20];
cin>>st;

int len=strlen(st);

for (int i = 0; i < len; i++)
{
    if (st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u')
    {
        /* code */
        st[i]='@';
    }
    
}
cout<<st;





return 0;
}