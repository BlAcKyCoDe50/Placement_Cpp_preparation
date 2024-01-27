#include<iostream>
using namespace std;

/*
    namespaces can be nested. It means that we can create namespaces inside the scope of another namespace.
    syntax:
        namespace outer_ns{
            namespace inner_ns{

            }
        }

*/

namespace outer_n1{
    int size=5;
    int arr[5]={1,2,3,4,5};
    namespace inner_n1{
        void display(int arr[],int size){
            for (int i = 0; i < size; i++)
            {
                cout<<arr[i]<<" ";
            }
            
        }
    }
    void print(){
        inner_n1::display(arr,size);
    }
}

main(){
 int size=5;
 int arr[size]={1,2,3,4,5};
 outer_n1:: inner_n1::display(arr,size);
 cout<<endl;
 outer_n1::print();

 return 0;
}