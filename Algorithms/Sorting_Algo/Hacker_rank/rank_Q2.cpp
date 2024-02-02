#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void displayNames(const vector<string>& names) {
    for (const string& name : names) {
        cout << name << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<string> names(n);

    // Input the names
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Print initial order
    cout << "Initial order: ";
    displayNames(names);

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (names[j] < names[minIndex]) {
                minIndex = j;
            }
        }

        swap(names[i], names[minIndex]);

        // Display after each iteration
        cout << "After Iteration " << i + 1 << ": ";
        displayNames(names);
    }

    // Print sorted order
    cout << "Sorted order: ";
    displayNames(names);

    return 0;
}
