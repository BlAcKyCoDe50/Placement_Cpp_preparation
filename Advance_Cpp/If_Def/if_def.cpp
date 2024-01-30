#include<iostream>
using namespace std;
#define Num 13
main(){
    #ifdef PI
        cout<<"PI value: "<<PI<<endl;
    #elif defined(Num)
        cout<<"Num is: "<<Num<<endl;
    #else
        cout<<"Not defined"<<endl;
    #endif

return 0;
}