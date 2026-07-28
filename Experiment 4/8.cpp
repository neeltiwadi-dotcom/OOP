#include <iostream>
using namespace std;

class Account
{
    int accountNo;
    string name;
    float balance;

public:
    void accept();
    void display();
};

void Account::accept()
{
    cout << "Enter Account Number: ";
    cin >> accountNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Balance: ";
    cin >> balance;
}

void Account::display()
{
    cout << "\nAccount Details";
    cout << "\nAccount Number: " << accountNo;
    cout << "\nName: " << name;
    cout << "\nBalance: " << balance;
}

int main()
{
    Account a;
    a.accept();
    a.display();

    return 0;
}
