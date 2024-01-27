#include<iostream>
using namespace std;

namespace first{
    int val=500;
}

main(){

int val=500;
cout<<first::val<<endl;
cout<<val;

return 0;
}
