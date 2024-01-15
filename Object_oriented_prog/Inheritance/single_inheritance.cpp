#include<iostream>
using namespace std;

class Instagramv1{
    public:
    void old_demo(){
        cout<<"Old Version executing"<<endl;
    }
};

class Instagramv2 : public Instagramv1{
    public:
    void new_Demo(){
        cout<<"Updated Version Executing"<<endl;
    }
};

main(){
Instagramv1 v1;
v1.old_demo();
// cout<<endl;
Instagramv2 v2;
v2.new_Demo();
// cout<<endl;
v2.old_demo();


return 0;
}