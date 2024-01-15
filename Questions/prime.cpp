#include<iostream>
using namespace std;

int prime(int num){
    int count=0;
   for (int i = 0; i <= num; i++)
   {
    /* code */
     if(num%1==0 && num%2==0) 
        count++;
   }
   if(count==2){
    cout<<"Prime"<<endl;
   }
   else{ cout<<"Not Prime";}
   
   return 0;
   
}
main(){

int num;
cin>>num;
prime(num);

return 0;
}