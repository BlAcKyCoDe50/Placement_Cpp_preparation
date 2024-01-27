#include<iostream>
using namespace std;
//Discontigous namespace
/*
    -> we can define namespaces in various program parts that can even be spread over multiple files is known as Discontigous namespace.
    ->The entire namespace is considered as the sum of its seperately defined parts.
*/
namespace ns1{
    int val=100;
}

namespace ns1{
    void fun(){
        cout<<val;
    }
}

main(){

ns1 :: fun();
return 0;
}