#include<iostream>
using namespace std;
main(){
int num;
cin>>num;
int rem=0;
int ans=0;

while (num>9) //10
{
    while (num>0)
    {
        /* code */
        rem=num%10;
        ans=ans+rem;
        num=num/10;
    }
    num=ans;
    // ans=0;
}
cout<<ans;
return 0;
}