#include<iostream>
using namespace std;

class Vechile{
    public:
    void display(){
        cout<<"Displaying Vechile...."<<endl;
    }
    void brake(){
        cout<<"applying brake"<<endl;
    }
};

class Car:public Vechile{
//    public:
//     void display_1(){
//         cout<<"Displaying Car..."<<endl;
//     }
//     void brake(){
//         cout<<"applying brake"<<endl;
//     }
};

class Fare{
    public:
    void display_2(){
        cout<<"displaying Fare...."<<endl;
    }
    void calculate(){

    }
};

class Bus : public Vechile,public Fare{
    public:
    void display_3(){
        cout<<"Displaying Bus along with Vechile & Fare"<<endl;
    }
};


main(){
// int n;
// cin>>n;
// int arr[n];

Bus b1;
// Car c1;
// c1.brake();
// c1.display();
// c1.display_1();
// cout<<endl;
b1.brake();
b1.calculate();
b1.display();
b1.display_2();
b1.display_3();

return 0;
}