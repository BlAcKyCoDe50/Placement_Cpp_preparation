
#include<iostream>
using namespace std;
class Bank{
    public:
    int acc_balance=44500;
    string Bank_name="BOI";
    string Acc_holder_name="John";
    int acc_no=12204;
    int IFSC=7418596;
    int last_trasaction=10000;

   void info(){
        cout<<"Account no: "<<acc_no<<endl;
        cout<<"Current Balance: "<<acc_balance<<endl;
        cout<<"Account holder name: "<<Acc_holder_name<<endl;
        cout<<"IFSC: "<<IFSC<<endl;
        cout<<"Last Trasaction of amount: "<<last_trasaction<<endl;
    }
};



main(){

    Bank john;
    john.info();
    

return 0;
}

