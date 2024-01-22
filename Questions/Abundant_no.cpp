#include<iostream>
using namespace std;

int abundant(int n){
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        
        if (sum>n)
        {
            return 0;        
        }

        else{
            return 1;
        }
        
    }
    
}


main(){
int n;
cin>>n;
int s=abundant(n);
if(s==0){
    cout<<"Abundant";
}
else{
    cout<<"Not Abundant";
}
return 0;
}