#include<iostream>
using namespace std;

//uniary operator=++,--;
class weight{
    int kg;
    public:
    weight(){
        kg=0;
    }
    weight(int k){
        kg=k;
    }
    void disp(){
        cout<<kg<<endl;
    }
    weight operator ++(){
        return weight(kg++);
    }
    weight operator ++(int){
        return weight(kg++);
    }

};

main(){

weight kg;
kg;
kg++;
kg.disp();
++kg;
kg.disp();
return 0;
}