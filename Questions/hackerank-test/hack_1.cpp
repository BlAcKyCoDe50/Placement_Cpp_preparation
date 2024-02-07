
// Move 0's to one end Move 1's to one end

// Input Format

// input consists of 5 integers

// Constraints

// na

// Output Format

// output consists of 5 integers with space where 0's will be at left

// Sample Input 0

// 5
// 1 0 1 0 1
// Sample Output 0

// 0 0 1 1 1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   int count=0;
   int count_1=0;
   for (int i = 0; i < n; i++)
   {
     if (arr[i]==0)
     {
        count++;
     }
     else if(arr[i]==1){
        count_1++;
     }
   }
   for (int i = 0; i < count; i++)
   {
    cout<<"0"<<" ";
   }
   for (int i = 0; i < count_1; i++)
   {
    cout<<"1"<<" ";
   }
  return 0;
}
