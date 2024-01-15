#include<iostream>
#include <string.h>
using namespace std;
main(){

char st[8];
cin>>st;
int z=0;
int o=0;

int len=strlen(st);
for (int i = 0; i < len; i++)
{
    if(st[i]=='0')
     cout<<"0";
   
}
for (int i = 0; i < len; i++)
{
     if(st[i]=='1'){
        cout<<"1";
    }
}









return 0;
}