#include<iostream>
using namespace std;

class TV{
    public:
    virtual void channel()=0;
};

class Parent:public TV{
    public:
    void channel(){
        cout<<"News Channel"<<endl;
    }
};

class child:public TV{
    public:
    void channel(){
        cout<<"POGO"<<endl;
    }
};


main(){
Parent p;
child c;

TV *tv1=&p;
TV *tv2=&c;

tv1->channel();
tv2->channel();


return 0;
}