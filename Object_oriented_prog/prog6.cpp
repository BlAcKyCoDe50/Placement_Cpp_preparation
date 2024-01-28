#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int majorityCandidate = -1;
    int majorityCount = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > majorityCount) {
            majorityCandidate = arr[i];
            majorityCount = count;
        }
    }

    if (majorityCount >= size / 2) {
        cout <<majorityCandidate;
        }
    else{
        cout<<"No majority candidate found";
    }
}