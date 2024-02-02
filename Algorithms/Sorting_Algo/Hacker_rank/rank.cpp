#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void displaynames(const vector<string>& names) {
    for (const string& name : names) {
        cout << name << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<string> names(n);
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }

    cout << "Initial order: ";
    displaynames(names);

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (names[j] < names[minIndex]) {
                minIndex = j;
            }
        }
        swap(names[i], names[minIndex]);
        cout << "After Iteration " << i + 1 << ": ";
        displaynames(names);
    }

    cout << "Sorted order: ";
    displaynames(names);

    return 0;
}