#include<iostream>
using namespace std;

class addition{
    public:int a,b;
    addition(){
        int a=0;
        int b=0;
    }
    addition(int x,int y){
         a=x;
         b=y;
    }
    void disp(){
        cout<<a<<" "<<b<<" "<<endl;
    }
    addition operator+(const addition &obj){
        addition add;
        add.a=a+obj.a;
        add.b=b+obj.b;
    }
};

main(){
addition a1(10,20),a2(30,40);
addition a3=a1+a2;
a3.disp();
a1.disp();

return 0;
}