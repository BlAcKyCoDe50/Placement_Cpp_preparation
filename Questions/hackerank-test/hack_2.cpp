// Uma is tasked with creating a program to calculate and display the speed of a car based on the distance covered and the time taken. Write a program with two classes: Vehicle as the base class and Car as the derived class, which inherits the properties from the Vehicle class for calculating the speed. The base class fetches the input as a float value, whereas the derived class calculates and prints the output as a float value.

// Input Format

// The input consists of two floating-point numbers separated by a space. The first number represents the distance traveled by the car, and the second number represents the time taken to cover that distance, separated by a space.

// Constraints

// The input distance and time should be non-negative floating-point numbers. The input time should not be zero (to avoid division by zero).

// Output Format

// The output displays a single line of output, showing the speed of the car in kilometers per hour.

// Sample Input 0

// 15.0 5.0
// Sample Output 0

// Speed of car: 3 km/hr
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Vechile{
   public:
    float num_1,num_2;
   
    int input(float num1,float num2){
        num_1=num1;
        num_2=num2;
    }
};

class Car: public Vechile {
public:
 void calculate(){
    int speed= num_1/num_2;
    cout<<"Speed of car: "<<speed<< " km/hr";
 }

};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Car v1;
    float num1,num2;
    cin>>num1;
    cin>>num2;
    
    v1.input(num1,num2);
    v1.calculate();
    
    return 0;
}
