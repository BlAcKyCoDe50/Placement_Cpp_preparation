#include<iostream>
#include<string.h>
using namespace std;
main(){

char s1[20];
cin>>s1;
char s2[20];
cin>>s2;

int s1_len=strlen(s1);
int s2_len=strlen(s2);
bool flag=false;
if (s1_len==s2_len)
{
    /* code */
    for (int i = 0; i < s1_len; i++)
{
    for (int j = 0; j < s2_len; j++)
    {
        /* code */
    }
}
}
else{
    cout<<"strings are not equal"<<endl;
}
if (flag==true)
{
    cout<<"String is Same..."<<endl;
}
else{cout<<"String is not Same";}
return 0;
}