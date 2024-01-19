#include<iostream>
using namespace std;

int main() {
    int row, col, size;
    cin >> size >> row >> col;
    int arr[row][col];

    cout << "Enter the values" << endl;
    for (int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int sum_left = 0;
    int sum_right = 0;

    for (int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if (i == j) {
                sum_left += arr[i][j];
            }
            if ((i + j) == size - 1) {
                sum_right += arr[i][j];
            }
        }
    }

    cout << "Sum of left diagonal: " << sum_left << endl;
    cout << "Sum of right diagonal: " << sum_right << endl;

    return 0;
}
