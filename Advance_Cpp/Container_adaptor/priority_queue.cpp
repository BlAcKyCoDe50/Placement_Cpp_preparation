#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<float> q;
    q.push(66.6);
    q.push(22.2);
    q.push(44.4);
    cout << q.top() << ' ';
    q.pop();
    cout << q.top() << endl;
    q.pop();
    q.push(11.1);
    q.push(55.5);
    q.push(33.3);
    q.pop();
    cout<<q.top();  //remaining elements are : 11.1,33.3 so the top will be 33.3
    // while (!q.empty()) 
    // {
    //     cout << q.top() << ' ';
    //     q.pop();
    // }
    cout << endl;
    return 0;
}

    
