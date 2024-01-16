#include<iostream>
using namespace std;

class Flipkart{
    public:
    void payment(){
        cout<<"You have choosen Cash on Delivery.."<<endl;
    }
    void payment(int CardNumber){
        cout<<"You have choosen EMI"<<endl;
    }
    void payment(string s){
        cout<<"You have choosen UPI.."<<endl;
    }
    void payment(string bank,int otp){
        cout<<"You have choosen Net Banking"<<endl;
    }
};

main(){
Flipkart order_1;
order_1.payment();
order_1.payment(741852);
order_1.payment("upi@74");
order_1.payment("UN Bank",7410);



return 0;
}