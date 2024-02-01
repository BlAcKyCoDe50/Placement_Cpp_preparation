// You are given a list of integers representing the scores of students in a class. The task is to sort the scores in ascending order using the bubble sort algorithm. Additionally, you need to print all the iteration values to track the progress of the sorting process. Write a program that takes the list of scores as input and performs bubble sorting on the list. After each iteration, print the current state of the list. Finally, display the sorted list of scores.

// Input Format

// The first line of input contains an integer n, representing the number of scores in the list. The second line contains n space-separated integers, representing the scores of the students.

// Scores: [89, 72, 95, 68, 82]

// Constraints

// 0 ≤ score ≤ 100 (the individual score of a student)

// Output Format

// The program should output the following: The original array of scores. After each iteration, the array state should be printed. The sorted array of scores.

// Iteration 1: [72, 89, 68, 82, 95] Iteration 2: [72, 68, 82, 89, 95] Iteration 3: [68, 72, 82, 89, 95] Iteration 4: [68, 72, 82, 89, 95]

// Sample Input 0

// 5
// 89 72 95 68 82
// Sample Output 0

// Original array: 
// 89 72 95 68 82 
// Iteration 1: 72 89 68 82 95 
// Iteration 2: 72 68 82 89 95 
// Iteration 3: 68 72 82 89 95 
// Iteration 4: 68 72 82 89 95 
// Sorted array: 68 72 82 89 95
// Sample Input 1

// 10
// 9 8 7 6 5 4 3 2 1 10
// Sample Output 1

// Original array: 
// 9 8 7 6 5 4 3 2 1 10 
// Iteration 1: 8 7 6 5 4 3 2 1 9 10 
// Iteration 2: 7 6 5 4 3 2 1 8 9 10 
// Iteration 3: 6 5 4 3 2 1 7 8 9 10 
// Iteration 4: 5 4 3 2 1 6 7 8 9 10 
// Iteration 5: 4 3 2 1 5 6 7 8 9 10 
// Iteration 6: 3 2 1 4 5 6 7 8 9 10 
// Iteration 7: 2 1 3 4 5 6 7 8 9 10 
// Iteration 8: 1 2 3 4 5 6 7 8 9 10 
// Iteration 9: 1 2 3 4 5 6 7 8 9 10 
// Sorted array: 1 2 3 4 5 6 7 8 9 10

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

int temp = 0;
cout << "Original array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        cout << "Iteration " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
