#include<iostream>
using namespace std;

class Base{
     public:
     int length;
     int width;

    void setvalue(int len,int wid){
        length=len;
        width=wid;
     }





};

class derived: public Base{
     public:
     int area(){
        int area_of_rec=length*width;
        return area_of_rec;
     }

};


main(){
// int n;
// cin>>n;
// int arr[n];
derived d;
d.setvalue(6,4);
cout<<d.area();


return 0;
}