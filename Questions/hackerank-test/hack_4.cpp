// Input Format

// Input consists of n integers

// Constraints

// na

// Output Format

// There is a trailing space at the end of each line.

// Sample Input 0

// 4
// Sample Output 0

// 1
// 0 1
// 1 0 1
// 0 1 0 1


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num = i % 2;
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }

    return 0;
}