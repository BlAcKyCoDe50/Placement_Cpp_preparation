#include<iostream>
using namespace std;

template<typename T>
T max(T a,T b,T c)
{
    T max;
    max=a;
    if (b>max)
    {
        max=b;
    }
    if (c>max)
    {
        max=c;
    }
    return max;
    
    
}
main(){
 cout<<max(10,20,30)<<endl;
 cout<<max(5.5,4.2,1.2)<<endl;
 cout<<max('x','c','y');


return 0;
}