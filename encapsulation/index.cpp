#include <iostream>
#include <string>

using namespace std;

// Make a class for Employee
class Employee {
private:
    // Members
    string empName;
    string companyName;
    int age;

public:
    // Constructor
    Employee(string name, string compName, int Age) {
        empName = name;
        companyName = compName;
        age = Age;
    }

    // Setter and getter for empName
    void setName(string name) {
        empName = name;
    }

    string getName() { 
        return empName;
    }

    // Setter and getter for companyName
    void setCompanyName(string compName) {
        companyName = compName;
    }

    string getCompanyName() { 
        return companyName;
    }

    // Setter and getter for age
    void setEmpAge(int Age) {
        age = Age;
    }

    int getAge() { 
        return age;
    }

    void introduceYourself() {
        cout << "Name: " << empName << endl;
        cout << "Company name: " << companyName << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating an Employee object using the constructor
    Employee employee1("Sabeer", "XYZ", 23);

    // Introduce the employee
    employee1.introduceYourself();

    return 0;
}
