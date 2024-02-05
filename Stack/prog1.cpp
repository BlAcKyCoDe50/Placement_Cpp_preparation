//Operations on stack_1
/*
push()
pop()
topElement()
isEmpty()
size()

*/
#include<iostream>
using namespace std;
int top=-1;

int size(){
    return top+1;
}

bool isEmpty(){
    if (top==-1)
    {
        return true;
    }
    else{
        return false;
    }
}

void push(int stack_1[],int x,int n){
    if (top==n-1)
    {
        cout<<"stack_1 Overflow condition!!";
    }
    else{
        top=top+1;
        stack_1[top]=x;
    }
    
}

void pop(int stack_1[],int n){
    if (isEmpty())
    {
        cout<<"stack_1 underflow condition"<<endl;
    }
    else{
        top=top-1;
    }
}

int topElement(int stack_1[]){
    return stack_1[top];
}

main(){
int n;
cout<<"Enter the size of the stack_1: ";
cin>>n;
int stack_1[n];
push(stack_1,5,3);
cout<<"current size of the stack_1 is: "<<size()<<endl;
push(stack_1,10,3);
push(stack_1,15,3);
cout<<"Current size of stack_1 is: "<<size()<<endl;
push(stack_1,20,3);
cout<<"current top element in stack_1 is: "<<topElement(stack_1)<<endl;

for (int i = 0; i < n; i++)
{
    pop(stack_1,n);
}
cout<<"current size of stack_1 is: "<<size()<<endl;
pop(stack_1,n);

return 0;
}