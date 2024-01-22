#include<iostream>
using namespace std;

int unique_no(int n){
    int last=0;
    int temp,third=0;
    while (n>0)
    {
        last=n%10; //2,4
        // cout<<"last: "<<last<<endl;
        n=n/10; //22
        // cout<<"N: "<<n<<endl;
        temp=n%10; //2
        // cout<<"temp: "<<temp<<endl;
        n=n/10; //2
        third=n;
        if (third!=n && n!=temp && n!=last && last!=temp)
        {
            cout<<"Unique";
            break;
        }
        else{
            cout<<"Not a Unique";
            break;
        }
        
    }
    
    
    
}

main(){
int n;
cin>>n;
unique_no(n);


return 0;
}