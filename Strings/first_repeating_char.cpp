#include<iostream>
#include<string.h>
using namespace std;
main(){
int size=0;

char arr[100];
cin>>arr;
size=strlen(arr);
int count=0;
int n=0;

for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        if (arr[i]==arr[j])
        {
                count++;
                break;
        }
 }
    if (count==1)
        {
            cout<<"first Repeating character: "<<arr[i];
            break;
        }
}
return 0;
}