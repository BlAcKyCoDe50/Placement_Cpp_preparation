// Imagine you are working on a user greeting application. You have been provided with a basic program that defines two classes: "Welcome" and "Hello". The "Welcome" class displays a generic welcome message, and the "Hello" class, which is derived from "Welcome" greets the user with "Hi" followed by the name entered by the user.Your task is to enhance the existing code to prompt the user to enter their name, create an instance of the Hello class, and greet the user with "Hi", followed by the entered name.

// Input Format

// The input consists of a string, which represents the name.

// Constraints

// na

// Output Format

// The output prints the welcome messages.

// Sample Input 0

// Sreevani
// Sample Output 0

// Welcome!! Hi, Sreevani

#include<iostream>
using namespace std;

class Welcome{
    public:
    void greetings(){
        cout<<"Welcome!!";
    }
};

class hello:public Welcome{
 public:
 void msg(string name){
    cout<<"Hi,"<<" "<<name;
 }
};

main(){
hello h1;
string name;
cin>>name;
h1.greetings();
h1.msg(name);

return 0;
}