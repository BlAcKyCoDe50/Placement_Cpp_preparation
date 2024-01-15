#include<iostream>
using namespace std;

class A{
    public:
    void demo(){
        cout<<"Executing Demo()..."<<endl;
    }

};

class B{
    public:
    void Sample(){
        cout<<"Executing Sample()....."<<endl;
    }
};

class C :public B,public A{
    public:
    void test(){
        cout<<"Executing test()...."<<endl;
    }
};




main(){
// int n;
// cin>>n;
// int arr[n];

C cl;
cl.demo();
cl.Sample();
cl.test();
return 0;
}