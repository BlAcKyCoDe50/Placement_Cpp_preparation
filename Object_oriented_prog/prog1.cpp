#include<iostream>
using namespace std;

class demo
{
    public:
    int a=10;
    void display()
{
    cout<<"Executing Display() function....."<<endl;
}};

main(){
demo d;
cout<<d.a<<endl;
d.display();
return 0;
}