#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int rem=0,ans=0;
while (n!=0) //23
{
        /* code */
        rem=n%10;   //3
        ans=rem*rem*rem; //27
        // n=n/10; 
        n=n/10;
}
  if (ans==n)
  {
    cout<<"Armstrong";
  }
  else{
    cout<<"Not a Armstrong";
  }
  
  return 0;  
}





