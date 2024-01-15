#include<iostream>
using namespace std;

class whatsappv1{
    public:
    void chat(){
        cout<<"chatting Feature"<<endl;
    }
};

class whatsappv2 : public whatsappv1{
    public:
    void calling(){
        cout<<"Voice/Video Call feature"<<endl;
    }
};

class whatsappv3:public whatsappv2{
    public:
    void status(){
        cout<<"Status Updation Feature"<<endl;
    }
};

main(){
// int n;
// cin>>n;
// int arr[n];
whatsappv3 wa;
wa.chat();
wa.calling();
wa.status();
return 0;
}