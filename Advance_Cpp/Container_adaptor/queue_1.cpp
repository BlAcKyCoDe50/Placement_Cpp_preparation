#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
    queue<string> q;
    q.push("These ");
    q.push("are ");
    q.push("four words!");
    cout << q.front();
    q.pop();
    cout << q.front();
    q.pop();
    q.push("delete!!");
    q.push("some");
    cout << q.front()<< endl;
    q.pop();
    cout << q.front()<< endl;
    cout << "no of elements in the queue: " << q.size();
    // cout<<q.front();
    return 0;
}
