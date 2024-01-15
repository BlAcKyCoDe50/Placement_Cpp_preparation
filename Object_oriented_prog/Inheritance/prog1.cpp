#include<iostream>
using namespace std;

class Base{
    public:
    void b(){
        cout<<"Base Class";
    }
};

class derived:public Base{

};

main(){
derived d;
d.b();

return 0;
}