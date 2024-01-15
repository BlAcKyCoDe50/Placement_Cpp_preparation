#include<iostream>
using namespace std;

class Box{
    public:
    double length,breadth,height;
    double getVolume(void);

};
double Box::getVolume(void){
    
    return length*breadth*height;
}
main(){
Box b1;
b1.breadth=1;
b1.height=1,b1.length=1;
cout<<b1.getVolume();

return 0;
}