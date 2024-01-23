#include<iostream>
#include<fstream>
using namespace std;
main(){

string line;
ifstream myfile("data.txt",ios::in);   // for reading from a file we'll use ifstream

if (!myfile.is_open())
{
    cout<<"File not found!!"<<endl;
}
else{
    cout<<myfile.tellg()<<endl;   //current position of the reading head/pointer
    string s;
    myfile.seekg(8);  //change the position of the reading pointer
    getline(myfile,s);
    cout<<s;
}

return 0;
}