#include<bits/stdc++.h>
using namespace std;

class cricket{
    public:
   //virtual keyword
    virtual void specialshot(){
        cout<<"Special shot"<<endl;
    }
};
class dhoni:public cricket{
    public:
    void specialshot ()override{
        cout<<"Helicopter shot"<<endl;
    }
};
class virat: public cricket{
    public:
    void specialshot()override{
        cout<<"Cover shot"<<endl;
    }
};

int main(){
    virat v;
    dhoni d;
    cricket *c1=&v;
    cricket *c2=&d;
    c1->specialshot();
    c2->specialshot();
    // v.specialshot();
    // d.specialshot();
    return 0;
}