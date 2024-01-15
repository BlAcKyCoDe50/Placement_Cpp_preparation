#include<iostream>
#include<string.h>
using namespace std;
main(){

char a[50],b[50];

cin>>a>>b;
if(strcmp(b,a)==0){
    cout<<"Same ";

}
else { cout<<"Not same"; }

return 0;
}