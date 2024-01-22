// 3. write a program to generate the following series: 
// i/p: 5
// o/p: 1,2,3,5,8

#include<iostream>
using namespace std;

int series(int n){
int n1=1;
int temp=0;
int n2=2,n3;

for (int i = 1; i <= n; i++)
{
    cout<<n1<<" ";
    n3=n1+n2;
    n1=n2;
    n2=n3;
}
}
main(){
int n;
cin>>n;
series(n);

return 0;
}