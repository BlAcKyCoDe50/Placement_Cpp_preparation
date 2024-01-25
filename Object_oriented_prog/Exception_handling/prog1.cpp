#include<iostream>
using namespace std;
main(){
    cout<<"Start\n";
    int a=19,b=0; //2
    try{
        if(b==0){
            // throw "divide by zero error\n";
            throw 0;
        }
        cout<<a/b;
     }
    catch(const char* e){  //use this when you have used string in the throw
        cout<<"Exception Occured....\n"<<e;

    }
    catch(int e){  //when there is int e in the throw block
        cout<<"Exception Occured....\n"<<e;

    }
    catch(...){  //when  you don't know which one to use 
        cout<<"Exception Occured....\n";

    }
    cout<<"End";
    // return 0
return 0;
}