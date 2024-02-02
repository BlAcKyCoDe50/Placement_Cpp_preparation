#include<iostream>
using namespace std;



int linearSearch(int arr[],int n,int el){
    bool flag=false;
    int i;
    for ( i= 0; i < n; i++)
    {
        if (arr[i]==el)
        {
           flag=true;
           break;
        }
}
    if (flag==true)
    {
        cout<<"Element found at index: "<<i<<endl;
        cout<<"Position of the element is: "<<i+1<<endl;
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


return 0;
}