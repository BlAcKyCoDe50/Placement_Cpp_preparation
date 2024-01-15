#include<iostream>
#include<math.h>
using namespace std;
main(){
int num;
cin>>num;
int rem=0;
int i=0;
int ans=0;
int base=2;
while (num>0)
{
    rem=num%10;
    ans=ans+rem*pow(base,i);
    i++;
    num=num/10;
}
cout<<ans;

return 0;
}

