#include<iostream>
using namespace std;
class demo{
public:
demo(){cout<<"Constructor Called..."<<endl;}

// **************Destrcutor**********************
//it is used to destroy the objects..
~demo(){
    cout<<"distructor Called....";
}
};

main(){
demo d,d1,d2,d3;

return 0;
}