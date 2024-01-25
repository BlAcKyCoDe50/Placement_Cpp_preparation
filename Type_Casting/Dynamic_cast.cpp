#include<iostream>
using namespace std;

//dynamic cast is a runtime cast operator used to perform conversion of one type of variable to another only on class
//pointers and references.

//->it means it checks the valid casting of the variables at the runtime,and of the casting fails,it returns a NULL value.
// syntax: dynamic_cast <new_data_type> (expression)

class Base{
    virtual void message()=0;
};

class Derived : public Base{
    void message() override{

        cout<<"Derived class";
    }
};
main(){

Base *ptr=new Derived;
Derived *dp=dynamic_cast<Derived*>(ptr);
if (dp!=nullptr)
{
    cout<<"Dynamic casting is done successfully!!"<<endl;
}
else{
    cout<<"Dynamic casting failed!!"<<endl;
}
delete ptr;
return 0;
}