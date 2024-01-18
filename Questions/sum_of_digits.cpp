#include<iostream>
using namespace std;
main(){
int num;
cin>>num;
int ans=0;
int rem=0;

while (num>0)
{
    rem=num%10;
    ans=ans+rem;
    num=num/10;
}
cout<<ans;


return 0;
}