#include<iostream>
using namespace std;

bool isprime(int num){
      bool flag=true;
      if(num==0 || num==1)
         flag= false;
   
   for (int i = 2; i < num/2; i++)
   {
      /* code */
      if(num%i==0){
         flag= false;
         break;
      }
      else
         flag= true;
   }
   return flag;
}
main(){

int num;
cin>>num;
if(isprime(num)==true)
   cout<<"Prime";
else
   cout<<"Not a prime";

return 0;
}