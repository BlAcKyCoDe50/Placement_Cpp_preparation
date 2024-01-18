#include<iostream>
using namespace std;

class multiplication{
    public:
    int a,b;
        multiplication(){
            a=0;
            b=0;
        }
        multiplication(int x,int y){
            a=x;
            b=y;
        }

        void disp(){
        cout<<a<<" "<<b<<" "<<endl;
    }

    multiplication operator *(const multiplication &obj){
        multiplication multi;
        multi.a=a*obj.a;
        multi.b=b*obj.b;
        return multi;
    }

};


main(){


multiplication a1(10,3),a2(3,4);
multiplication a3=a1*a2;
a3.disp();


return 0;
}