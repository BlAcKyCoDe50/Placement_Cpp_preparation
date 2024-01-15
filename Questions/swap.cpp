#include<iostream>
using namespace std;

void swap(int num1,int num2){
    // int temp=num1;
    cout<<"Num 1: "<<num1<<" num2: "<<num2<<endl;
     int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"Num 1: "<<num1<<" num2: "<<num2<<endl;
}

main(){
int num1,num2;
cin>>num1>>num2;
swap(num1,num2);
return 0;
}