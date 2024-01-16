#include<iostream>
using namespace std;

class Facebook_login{
    public:
    void credentials(string username,string password){
        cout<<"Login through username & password"<<endl;
        cout<<"Login successfull!!! ";
    }
    void credentials(string username,int OTP){
        cout<<"Login through OTP"<<endl;
        cout<<"Login successfull!!! ";
    }
    void credentials(int DOB,string last_pass){
        cout<<"Login through DOB & last password";
    }
};


main(){

Facebook_login u1;
u1.credentials("user","P@123");
u1.credentials("user1",7410);
u1.credentials(23,"irel");
return 0;
}