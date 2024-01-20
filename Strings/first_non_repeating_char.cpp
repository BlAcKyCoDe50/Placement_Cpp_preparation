#include<iostream>
#include<string.h>
using namespace std;
main(){
int size=0;
char arr[100];
cin>>arr;
size=strlen(arr);
for (int i = 0; i < size; i++)
{
    int count=0;
    for (int j = 0; j < size; j++)
    {
        if (arr[i]==arr[j])
        {
                count++;
                // break;
        }
}
    if (count==1)
        {
            cout<<"first non-repeating character: "<<arr[i]<<endl;
            break;
            
        }
}
return 0;
}