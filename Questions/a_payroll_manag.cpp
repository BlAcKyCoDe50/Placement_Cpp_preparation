// Imagine you are developing a payroll management system for a company that needs to keep track of employee salary information. As part of this system, you are tasked with creating a class named "Employee" to represent each employee's salary. The class should have the following specifications:

// A private static data member named "count" keeps track of the total number of employee objects created. It should be initialized to 0.
// A public static member function named "getCount" that allows the company to retrieve the total count of employee objects.
// A public member function named "setSalary" takes in the value of "salary" as a parameter and sets the corresponding data member for an employee object. This function allows the company to set the salary for an employee.
// A public member function named "getSalary" retrieves and returns the value of "salary" for an employee object. This function allows the company to retrieve an employee's salary for various calculations.
// A private data member named "salary" stores the integer value of an employee's salary. This data member is specific to each employee object.
// N

// Output Format

// The output displays the total number of employees, followed by their salary on each line.

// Sample Input 0

// 3
// 100
// 200
// 300
// Sample Output 0

// Total number of employees: 3
// Salary for employee 1: 100
// Salary for employee 2: 200
// Salary for employee 3: 300

#include<iostream>
using namespace std;

class employee{
   
    public:
     int count=0;
    int salary=0;
    void getCount(int countt){
        count=countt;
    }
    void setSalary(int sal){
        salary=sal;
    }
    int getSalary(){
        return salary;
    }
};
main(){
employee e1;
int n;
cin>>n;
n++;
int arr[n];
e1.count=n;

for (int i = 1; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 1; i < n; i++)
{
    e1.setSalary(arr[i]);
}

for (int i = 1; i < n; i++)
{
    cout<<"Salary of Employee "<<i<<" : "<<arr[i]<<endl;
}

return 0;
}