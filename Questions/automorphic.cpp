#include<iostream>
using namespace std;
main(){

int a;
cin>>a;
int b=a*a;

int flag=0;
int x,y;
while (a!=0 && b!=0)
{
    x=a%10;
    y=b%10;

    if (x!=y)
    {
        flag=1;
        break;
    }
    a=a/10;
    b=b/10;
}

if(flag==0){
    cout<<"Automorphic number";
}
else{cout<<"Not an Automorphic number";}
return 0;
}