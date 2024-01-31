#include<iostream>
using namespace std;
main(){

char gender;
cout<<"Enter the Gender: ";
cin>>gender;
cout<<"Enter the Age: "<<endl;
int age;
cin>>age;

if(age>18){
    if(gender=='M'){
        cout<<"Boys PG"<<endl;
    }
    else if(gender=='F'){
        cout<<"Girls PG"<<endl;
    }
}
else{
    cout<<"You are not eligible "<<endl;
}

return 0;
}