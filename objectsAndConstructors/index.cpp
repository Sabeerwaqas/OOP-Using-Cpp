#include<iostream>
#include<string>

using namespace std;

// =====> make a class for employee

class Employee {
public:
    // members
    string empName;
    string companyName;
    int age;
    
    // member function
    void introduceYourself(){
        cout << "Name :" << empName << endl;
        cout << "Company name :" << companyName << endl;
        cout << "Age :" << age << endl;
    };
};

int main(){
    
    Employee employeeOne;
    
    employeeOne.empName = "Sabeer";
    employeeOne.companyName = "XYZ";
    employeeOne.age = 23;
    
    employeeOne.introduceYourself();
    
    
    
    
    
    return 0;
}