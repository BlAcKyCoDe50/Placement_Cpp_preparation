#include<iostream>
using namespace std;

int calcGCD(int n, int m){
    // Write your code here.
    int gcd=1;
    for(int i=min(n,m);i<=max(n,m);i--){
            if(n%i==0 && m%i==0){
                gcd=i;
                break;
            }
    }
    cout<<gcd;
    
}

main(){
int n,m;
cin>>n>>m;
calcGCD(n,m);

return 0;
}