#include<iostream>
using namespace std;
main(){
int n;
cin>>n;

int pw;
cin>>pw;
int ans=1;
int result=0;
while (pw>0)
{
    ans=ans*n;
    pw--;
}
cout<<ans;
return 0;
}