#include<iostream>
using namespace std;
main(){
//Q. A person want to fix two paintings on the wall...so there are sizes of two paintings...we have to check that
//he can fix the paintings on the wall or not
int wall_size_1;
cin>>wall_size_1;
int wall_size_2;
cin>>wall_size_2;

int size_1;
cin>>size_1;
int size_2;
cin>>size_2;
int size_3;
cin>>size_3;
int size_4;
cin>>size_4;

if((wall_size_1*wall_size_2)> (size_1*size_2) && (wall_size_1*wall_size_2)> (size_3*size_4)){
    cout<<"He can fix";
}
else{cout<<"Not Fix";}
return 0;
}