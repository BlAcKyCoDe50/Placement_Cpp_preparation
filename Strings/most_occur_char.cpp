#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int size = 0;
    char arr[100];

    cout << "Enter a string: ";
    cin >> arr;

    size = strlen(arr);

    char most;
    int maxCount = 0;

    for (int i = 0; i < size; i++) {
        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            most = arr[i];
        }
    }

    cout << "Most frequently occurring character: " << most << endl;

    return 0;
}
