//There is a range given n and m in which we have to find the count all the prime pairs whose difference is 6.
//we have to find how many sets are there within a given range.

#include<iostream>
using namespace std;

int prime_pairs(int n)
{
     bool flag=true;
    int pr1,pr2=0;
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j < i/2; j++)
        {
            if (i%j==0)
            {
                flag=false;
            }
            if (flag==true)
        {
            pr1=i;
            
        }
            
        }
    }
    
}

main(){
int n;
cin>>n;
prime_pairs(n);

return 0;
}