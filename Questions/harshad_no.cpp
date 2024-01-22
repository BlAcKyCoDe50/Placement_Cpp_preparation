#include<iostream>
using namespace std;


//harshad no is the no where the sum of its digits divides the whole no.
//ex: n=156...1+5+6=12....and 156%12==0
int unique(int n){
    int last=0;
    int sum=0;
    while (n>0)
    {
        last=n%10;
        sum=sum+last;
        n=n/10;
    }
    if (n%sum==0)
    {
        cout<<"harshad_no";
    }
    else{ 
        cout<<"Not a harshad_no";
    }
    
    
}

main(){
int n;
cin>>n;
unique(n);


return 0;
}