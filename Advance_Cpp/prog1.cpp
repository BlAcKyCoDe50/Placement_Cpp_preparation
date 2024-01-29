#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    vector<string> sen;
    sen.reserve(5);
    sen.push_back("Hello,");
    sen.insert(sen.end(),{"how","are","you","?"});
    copy (sen.cbegin(),sen.cend(),ostream_iterator<string>(cout," "));
    cout << endl;
    cout << " max_size(): " << sen.max_size() << endl;
    cout << " size(): " << sen.size() << endl;
    cout << " capacity(): " << sen.capacity() << endl;
    swap (sen[1], sen[3]);
    sen.insert (find(sen.begin(),sen.end(),"?"),"always");
    sen.back() = "!";
        copy (sen.cbegin(), sen.cend(),ostream_iterator<string>(cout," "));
    cout << endl;
    cout << " size(): " << sen.size() << endl;
    cout << " capacity(): " << sen.capacity() << endl;
    sen.pop_back();
    sen.pop_back();
    sen.shrink_to_fit();
    cout << " size(): " << sen.size() << endl;
    cout << " capacity(): " << sen.capacity() << endl;
    return 0;
}


// https://notepad.pw/lpustl
