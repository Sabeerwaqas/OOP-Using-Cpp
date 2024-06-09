#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string empName;
    string companyName;
    int age;

public:
    // Default constructor
    Employee() {
        empName = "Unknown";
        companyName = "Unknown";
        age = 0;
    }

    // Parameterized constructor with 1 parameter
    Employee(string name) {
        empName = name;
        companyName = "Unknown";
        age = 0;
    }

    // Parameterized constructor with 2 parameters
    Employee(string name, string compName) {
        empName = name;
        companyName = compName;
        age = 0;
    }

    // Parameterized constructor with 3 parameters
    Employee(string name, string compName, int Age) {
        empName = name;
        companyName = compName;
        age = Age;
    }

    void introduceYourself() {
        cout << "Name: " << empName << endl;
        cout << "Company name: " << companyName << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Using the default constructor
    Employee employee1;
    employee1.introduceYourself();

    // Using the constructor with 1 parameter
    Employee employee2("Sabeer");
    employee2.introduceYourself();

    // Using the constructor with 2 parameters
    Employee employee3("Sabeer", "XYZ");
    employee3.introduceYourself();

    // Using the constructor with 3 parameters
    Employee employee4("Sabeer", "XYZ", 23);
    employee4.introduceYourself();

    return 0;
}
