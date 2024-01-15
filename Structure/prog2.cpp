#include<iostream>
using namespace std;

struct student{
    int rollno;
    char name[50];
    int m1,m2,m3;
    float avg;
};

main(){

    student s[3];
    for (int i = 1; i <= 3; i++)
    {
        cout<<"Roll NO: "<<i<<endl;
        // cin>>s[i].rollno;
        cout<<"Enter the name: "<<endl;
        cin>>s[i].name;
        cout<<"enter the marks for subject 1: "<<endl;
        cin>>s[i].m1;
        cout<<"enter the marks for subject 2: "<<endl;
        cin>>s[i].m2;
        cout<<"enter the marks for subject 3: "<<endl;
        cin>>s[i].m3;

        s[i].avg=((s[i].m1+s[i].m2+s[i].m3)/3);
        cout<<"Average: "<<s[i].avg<<endl;
        
}
return 0;
}