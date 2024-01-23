#include<iostream>
#include<fstream>
using namespace std;
main(){

ofstream myfile("data.txt");

if (!myfile.is_open())
{
    cout<<"File not found!!"<<endl;
}
else{
    myfile<<"Writing text to the document\n";
    myfile<<"Writing next line to the same document\n";
    myfile.close();
    cout<<"Successful !!";
}

return 0;
}