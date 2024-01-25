#include<iostream>
using namespace std;
main(){

//in this type of casting we convert the one pointer data type to another pointer of diff type.

int*ptr=new int(65);
char*ch=reinterpret_cast <char *> (ptr);
cout<<"Address: "<<ptr<<endl;
cout<<"Value: "<<*ptr<<endl;
cout<<"Converted value: "<<ch;
return 0;
}