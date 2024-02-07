#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//root element has to be greater than it's child

void insertAtMax(vector<int> arr,int n,int element){
    n=n+1;
    arr[n]=element;
    int i=n;
    while (i>0)
    {
       int parent=i/2;
       if(arr[parent]<arr[i]){
        swap(arr[parent],arr[i]);
        i=parent;
       }
    }
}

main(){
vector<int> arr={70,60,45,10,50,9,35,40,39,16};
int n=arr.size();
int element;
cin>>element;
insertAtMax(arr,n,element);

return 0;
}