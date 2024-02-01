// You are developing a student grading system for a school. As part of the system, you need to implement a feature that sorts the student names in alphabetical order based on their names. Write a program that prompts the user to enter the number of students and their respective names. The program should then use the selection sort algorithm to sort the student names in alphabetical order. After each iteration of the selection sort, the program should display the updated student names to reflect the current state of the sorting process. This feature will allow teachers and administrators to easily organize and manage student records based on their names. It provides a systematic approach for searching and accessing student information, facilitating efficient record-keeping and administrative tasks within the student grading system.

// Input Format

// The first line of input consists of the number of names n.

// The second line of input consists of n names, separated by space.

// Constraints

// NA

// Output Format

// The first line of output prints the names in the given order, separated by space.

// The following lines print the result after each iteration.

// The last line of output prints the names in sorted order, separated by space.

// Sample Input 0

// 6
// Hi Hello Welcome to DataStructures Course
// Sample Output 0

// Initial order: Hi Hello Welcome to DataStructures Course 
// After Iteration 1: Course Hello Welcome to DataStructures Hi 
// After Iteration 2: Course DataStructures Welcome to Hello Hi 
// After Iteration 3: Course DataStructures Hello to Welcome Hi 
// After Iteration 4: Course DataStructures Hello Hi Welcome to 
// After Iteration 5: Course DataStructures Hello Hi Welcome to 
// Sorted order: Course DataStructures Hello Hi Welcome to


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