#include<bits/stdc++.h>
// #include <typeinfo>
using namespace std;


class Base{
    virtual void message()=0;
};

class Derived : public Base{
    void message() override{

        cout<<"Derived class";
    }
};

main(){
    Derived d1;
    Base *bp=dynamic_cast<Base*>(&d1);
    Derived *dp1=dynamic_cast<Derived*>(bp);
    
    if (dp1!=nullptr)
    {
        "NULL";
    }
    else{cout<<"NULL";}
    
    try
    {
        Derived &r1=dynamic_cast<Derived&>(*bp);
        cout<<"Dynamic cast successful for reference";
    }
    catch(bad_cast& ex)
    {
        cout<<"Dynamic cast failed for reference";
    }
    
    return 0;
    }