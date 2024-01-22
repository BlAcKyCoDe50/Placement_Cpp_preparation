#include<iostream>
using namespace std;

class A{
public:
    virtual void demo() = 0;
};

class B : public A {
public:
    void demo()  {
        cout << "Executing Demo" << endl;
    }
};

main(){
// B b;
A *a=new B;
a->demo();

return 0;
}