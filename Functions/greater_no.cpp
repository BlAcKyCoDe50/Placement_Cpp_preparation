#include<iostream>
using namespace std;

// ***********NO argument no return value******************
// void fun(){
//     int x,y;
//     cin>>x>>y;
//     if(x>y){cout<<"X is greater";}
//     else{cout<<"Y is greater";}
// }


// ***********NO argument with return value******************
// int fun(){
//     int x,y;
//     cin>>x>>y;

//      if(x>y){return x;}
//     else{return y;}
// }

// *****************argument with no value*********************

// int fun(int x,int y){
//     int x,y;
//     cin>>x>>y;

//      if(x>y){cout<<"x is greater";}
//     else{cout<< "y is greater";}
// }

// *****************argument with return  value*********************

int fun(int x,int y){
    int x,y;
    cin>>x>>y;

     if(x>y){return x;}
    else{return y;}
}



main(){
    // fun();  No argument no return value
    int x, y;
    cin>>x>>y;
    // cout<<fun(); //NO argument with return value
    // fun( x, y); //// argument with no return value
    cout<<fun(x,y); //argument with  return value
return 0;
}