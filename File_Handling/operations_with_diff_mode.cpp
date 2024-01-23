#include<iostream>
#include<fstream>
using namespace std;
main(){
string line;
//ios::app(append)....writes the data to the last
// ofstream myfile("data.txt",ios::app);
//trunc will delete all the data
// ofstream myfile("data.txt",ios::trunc);
ofstream myfile("data.txt",ios::ate);
// fstream 
if (!myfile.is_open())
{
    cout<<"File not found!!"<<endl;
}
else{
    
    // myfile<<"Writing next line to the same document\n";
    myfile.close();
    cout<<"Successful a!!";
}

return 0;
}