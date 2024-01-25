#include<iostream>
using namespace std;
main(){
//cons_cast is used to change or manipulate the behaviour of the source pointer.
//we can perform const in two ways: 
//   ->setting a const to a non-const pointer or deleting the const from a const pointer.
//syntax: const_cast <new_data_type> (expression)

const int constVal=45;
int *mulptr=const_cast <int *>(&constVal);
*mulptr=54;
cout<<"Value: "<<constVal<<endl;
cout<<"Modified: "<<*mulptr;


return 0;
}