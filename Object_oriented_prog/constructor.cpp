#include<iostream>
using namespace std;                          
class car
{
 int speed,mileage;
 public:
 
 //***********default constructor****************
//  car(){
//     speed =50;
//     cout<<speed;   //we can access the private objects with this constructors.
//  }

//parametrized constructor
car(int x,int y){
    speed =x;
    mileage=y;
    cout<<"Speed: "<<speed<<endl;;   //we can access the private objects with this constructors.
    cout<<"Mileage: "<<mileage; 
 }

//**********Copy Constructor**************

};
main(){
    car c(80,17);
return 0;
}