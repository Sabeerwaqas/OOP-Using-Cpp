#include <iostream>

using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

public:
    // Default constructor

    Customer()
    {
        cout << "Default constructor is called" << endl;
    };

    // Parameterized constructor

    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    };

    // Inline constructor

    Customer(string a, int b, int c): name(a), account_number(b), balance(c){
        
    };

    // Member function

    void display()
    {
        cout << "name => " << name << endl;
        cout << "account number => " << account_number << endl;
        cout << "balance => " << balance << endl;
    };
};

int main()
{

    Customer A1;
    Customer A2("Sabeer", 223344, 1000);
    A2.display();

    return 0;
}