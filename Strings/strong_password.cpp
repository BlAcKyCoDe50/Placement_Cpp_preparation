#include<iostream>
#include<string.h>
using namespace std;

bool isStrongPass(string s){
    bool containsUpper=false;
    bool containsDigit=false;
    bool conatinsSpecial=false;


    for(auto c:s) {  //for_each loop...all the values of s will get stored in c.
        if (isdigit(c))
        {
            containsDigit=true;
        }
        if (ispunct(c))
        {
            conatinsSpecial=true;
        }
        if (isupper(c))
        {
            containsUpper=true;
        }
        }
    if (containsDigit && containsUpper && conatinsSpecial && s.size()>=8)
    {
        return true;
    }
    return false;
    

}
main(){



string s;
getline(cin,s);

if(isStrongPass(s))
    cout<<"Strong Password!!...";
else{
    cout<<"Not a Strong Password...";
}
return 0;
}