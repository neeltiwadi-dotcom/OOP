#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;

public:
    void accept()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;
    }

    void display()
    {
        cout << "\nStudent Details";
        cout << "\nName: " << name;
        cout << "\nRoll No: " << rollNo;
    }
};

int main()
{
    Student s;
    s.accept();
    s.display();

    return 0;
}
