#include<iostream>
#include<fstream>
using namespace std;
main(){
string line;
ifstream myfile("data.txt");   // for reading from a file we'll use ifstream

if (!myfile.is_open())
{
    cout<<"File not found!!"<<endl;
}
else{
    while (getline(myfile,line))
    {
        cout<<line<<"\n";
    }
    myfile.close();
}

return 0;
}