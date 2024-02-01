#include<iostream>
#include "functions.cpp"
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    array_insertion(arr, n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    int expected_sum = n * (n + 1) / 2; // Sum of first n natural numbers
    int missing_number = expected_sum - sum;

    cout << "Missing number: " << missing_number << endl;

    return 0;
}
