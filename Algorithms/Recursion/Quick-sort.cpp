#include<iostream>
#include <algorithm>
using namespace std;

int Partition(int arr[], int low, int high, int pivot) {
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int pi = Partition(arr, low, high, pivot);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n = 6;
    int arr[6] = {8, 4, 5, 10, 2, 3};
    int high = n - 1;
    int low = 0;
    
    quickSort(arr, low, high);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
