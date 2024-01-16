#include<iostream>
using namespace std;

class construct{
    public:
    float area;
    construct(){
        cout<<"0-arg constructor"<<endl;
        area=0;

    }
    construct(int a,int b){
        cout<<"2-arg constructor"<<endl;
        area=a*b;
    }
    void disp(){
        cout<<area<<endl;
    }
};

main(){
construct o;
o.disp();
construct o2(10,20);
o2.disp();
return 1;

return 0;
}