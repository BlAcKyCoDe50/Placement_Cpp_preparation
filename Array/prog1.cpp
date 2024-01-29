#include<iostream>
#include<array>
using namespace std;
main(){
//declaring 
array<int,6> ar={1,2,3,4,5,6};
array<int,6> ar1={7,8,9,10,11,12};
cout<<"The array elements are (using at() ): ";
for (int i = 0; i < 6; i++)
{
    cout<<ar.at(i)<<" ";
}
cout<<"The array elements using (operator []):  ";
for (int i = 0; i < ar1.size(); i++)
{
    cout<<ar1[i]<<" ";
}
//printing the array elements: 
cout<<endl;
cout<<"The number of array elements is: "<<endl;
cout<<ar.size()<<endl;
cout<<"Capacity of array to hold elements is: ";
cout<<ar.max_size()<<endl;
//swapping
ar.swap(ar1);
cout<<"The first array elements after swapping are: ";
for (int i = 0; i < ar.size(); i++)
{
    cout<<ar[i]<<" ";
}
cout<<endl;
cout<<"The second array elemtns after swapping are: ";
for (int i = 0; i < ar1.size(); i++)
{
    cout<<ar1[i]<<" ";
}
cout<<endl;
ar1.empty()?cout<<"Array empty: ":cout<<"Array not empty";
cout<<endl;
ar.fill(0); //fill all the elements of ar with 0
cout<<"Array after filling operation is: ";
for (int i = 0; i < ar.size(); i++)
{
    cout<<ar[i]<<" ";
}

return 0;
}