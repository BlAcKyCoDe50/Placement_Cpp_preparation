#include<iostream>
#include<string.h>
using namespace std;
main(){

char arr[10];
cin>>arr;
int size=strlen(arr);

for (int i = 0; i < size; i++)
{
    if ((arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u') && (arr[i+1] == 'a'||arr[i+1] == 'e'||arr[i+1] == 'i'||arr[i+1] == 'o'||arr[i+1] == 'u'))
    {
        arr[i]='\0';
        arr[i+1]='\0';
        // break;
        // cout<<"removing";
    }
   
    // cout<<"outside";
    
}
for (int i = 0; i < size; i++)
{
    cout<<arr[i];
}
return 0;
}