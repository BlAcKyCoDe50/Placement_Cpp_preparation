#include<iostream>
using namespace std;

class Hotel{
        public:
        // void eat(int a){
        //     cout<<"Pizza"<<endl;
        // }
        // void eat(float b){ 
        //     cout<<"Burger"<<endl;
        // }
        // void eat(string s){
        //     cout<<"Curd Rice"<<endl;
        // }
        void eat(int a,int b){
            cout<<"length of arguments...."<<endl;
        }
        void eat(int b,int c,int a){
            cout<<"last...."<<endl;
        }
};
//***********function Overloading*********************
main(){
    Hotel h;
    h.eat(1,2);
    h.eat(3,5,9);
    // h.eat("heyy");

return 0;
}