#include<iostream>
using namespace std;
main(){

char ch[10];
cout<<"Enter the first word: ";
cin>>ch;
cin.ignore(); //it will ignore the termination of the cin.

string s;
cout<<"Enter the second word: ";
getline(cin,s);

cout<<"First Word: "<<ch;
cout<<"Second word: "<<s;

return 0;
}