#include<iostream>
using namespace std;

class Base{
    int x;
    public:
    Base(){
        cout<<"Base default constructor"<<endl;

    }
};

class derived:public Base{
    int y;
    public:
    derived(){
        cout<<"Derived default constructor"<<endl;
    }
    derived(int i){
        cout<<"Derived parameterized constructor"<<endl;
    }
};




main(){

Base b;
derived d1;
derived d2(10);
return 0;
}