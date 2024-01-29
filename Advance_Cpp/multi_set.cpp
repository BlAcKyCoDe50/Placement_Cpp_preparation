#include <set>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    multiset<string> cities 
    {
        "Bangalore", "Hanover", "Frankfurt", "New York","Chicago", 		   "Toronto", "Paris", "Frankfurt"
    };
    for (const auto& elem : cities) 
        cout << elem << " ";
    cout << endl;
    cities.insert( {"London", "Munich", "Hanover", "Bangalore"} );
    for (const auto& elem : cities) 
    {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
