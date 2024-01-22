#include<iostream>
using namespace std;
main(){

//new opeartor is used to create the object dynamically.
double *p=NULL;
p=new double;
*p=29494.99;
cout<<"Value of P is: "<<*p<<endl;
delete p;

return 0;
}