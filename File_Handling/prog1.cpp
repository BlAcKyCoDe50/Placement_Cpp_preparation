#include<iostream>
#include<fstream>
using namespace std;
main(){

ofstream myfile;
myfile.open("data.txt");
myfile<<"Created a new file\n";
myfile.close();

return 0;
}