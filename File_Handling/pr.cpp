#include<iostream>
using namespace std;
main(){
int arr[] = {1, 2, 3, 4, 5};
int* ptr = &arr[4];
cout << ptr[-2];

return 0;
}