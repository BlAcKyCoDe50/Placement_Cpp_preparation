#include<iostream>
#include<string.h>
using namespace std;

main(){

char vowels[50]={"a,e,i,o,u"};

char a[20] ;
cin>>a;
int n=strlen(a);
// for (int i = 0; i < n; i++)
// {
//     /* code */              self approach
//     if(strcmp(vowels,s)==0){
//         cout<<"";
//     }
//     else{ cout<<s[i];}

// }
// for (int i = 0; i < n; i++)
// {
//     /* code */
//     if(a[i]=='a' || a[i]=='e' || a[i]=='i'||a[i]=='o'||a[i]=='u'){
//         cout<<"";
//     }
//     else{ cout<<a[i];}

// }

//removing consecutive vowels

for (int i = 0; i < n; i++)
{
    if(a[i] && a[i+1]== a[i]=='a' || a[i]=='e' || a[i]=='i'||a[i]=='o'||a[i]=='u'){
        cout<<"";
    }
    else{
        cout<<a[i];
    }
}


return 0;
}