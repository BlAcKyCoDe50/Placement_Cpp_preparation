#include<iostream>
using namespace std;
main(){
int arr[] = {1, 2, 3, 4, 5};
int* ptr = arr;
cout << *(ptr + 4);

return 0;
}