//deletion in max heap always on the root node,deletion always performs on the root node.
//replace the root node with the rightmost leaf node.
//now check for the root node i.e. compare it with child node's and check for the greatest element
//heapify all the nodes are not at their correct position.
// visit: https://www.geeksforgeeks.org/insertion-and-deletion-in-heaps/

// Left child=2*i386
// right child=(2*i)+1;


#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int> arr, int n, int i)
{
    // Find parent
    int parent = (i - 1) / 2;
 
    if (arr[parent] > 0) {
        // For Max-Heap
        // If current node is greater than its parent
        // Swap both of them and call heapify again
        // for the parent
        if (arr[i] > arr[parent]) {
            swap(arr[i], arr[parent]);
 
            // Recursively heapify the parent node
            heapify(arr, n, parent);
        }
    }
}


void deletion(vector<int> arr,int n,int element){

} 

void insertNode(vector<int> arr, int& n, int Key)
{
    // Increase the size of Heap by 1
    n = n + 1;
 
    // Insert the element at end of Heap
    arr[n - 1] = Key;
 
    // Heapify the new node following a
    // Bottom-up approach
void deleteRoot(vector<int> arr, int& n)
    {
        // Get the last element
        int lastElement = arr[n - 1];
     
        // Replace root with last element
        arr[0] = lastElement;
     
        // Decrease size of heap by 1
        n = n - 1;
     
        // heapify the root node
        heapify(arr, n, 0);
    }pify(arr, n, n - 1);
}




main(){


return 0;
}