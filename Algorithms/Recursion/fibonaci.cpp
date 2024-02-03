#include<iostream>
using namespace std;

int fib(int n){
    if (n<=1)
    {
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
    
}

main(){
int n;
cin>>n;
// int arr[n];
cout<<fib(n);

return 0;
}