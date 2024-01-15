#include<iostream>
using namespace std;

void delete_Element(int arr[],int num,int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==num)
        {
            /* code */
            // arr[i]=;
            for (int j = i; j < size-1 ; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            // break;
        }
        
    }
    
}

main(){
int n;
cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int num;
cout<<"Enter the no want to delete: "<<endl;
cin>>num;
delete_Element(arr,num,n);

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}