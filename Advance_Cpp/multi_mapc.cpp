#include <map>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    multimap<int,string> coll; 
    coll = { {5,"tagged"},
             {2,"a"},
             {1,"this"},
             {4,"of"},
             {6,"strings"},
             {1,"is"},
             {3,"multimap"} };
    for (auto elem : coll) 
    {
        cout << elem.second << ' ';   //first: first keyword is for key || second: second keyword is for elements   
    }
    cout << endl;
    return 0;
}
