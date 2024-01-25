#include<iostream>
using namespace std;

int inserting_at_index(int arr[],int n,int index,int el){
    for (int i = 0; i <= index; i++)
    {
        if (i==index)
        {
            n++;
            for (int j = i; j < n; j++)
            {
                // arr[i+2]=arr[i];
              
                
            }
            // cout<<"Enter the element for insertion: ";
            arr[i]=el;
            
        }
}
  
//printing 
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
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
int index,el=0;
cout<<"index: "; 
cin>>index;
cout<<"Element: ";
cin>>el;

inserting_at_index(arr,n,index,el);
return 0;
}