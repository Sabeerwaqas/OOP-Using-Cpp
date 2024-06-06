// =====> Constructors

// => Rule 1. Constructor does not has return type.
// => Rule 2. Constructor has the same name like class.
// => Rule 3. Constructor must be public. There are some specific situations where constructions should
// be private.

// When we create constructor, we lost the default one.

#include <iostream>
#include <string>

using namespace std;

// =====> make a class for employee

class Employee
{
public:
    // members
    string empName;
    string companyName;
    int age;

    void introduceYourself()
    {
        cout << "Name :" << empName << endl;
        cout << "Company name :" << companyName << endl;
        cout << "Age :" << age << endl;
    };

    Employee(string name, string compName, int Age){
        empName = name;
        companyName = compName;
        age = Age;
    }
};

int main()
{

    // Employee employeeOne;

    // employeeOne.empName = "Sabeer";
    // employeeOne.companyName = "XYZ";
    // employeeOne.age = 23;

    // employeeOne.introduceYourself();

    Employee employee1 = Employee("Sabeer", "XYZ", 23);

    employee1.introduceYourself();

    return 0;
}