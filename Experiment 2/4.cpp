#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float marks;

public:
    void accept();
    void display();
};

void Student::accept()
{
    cout << "Enter Roll No: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;
}

void Student::display()
{
    cout << "\nRoll No: " << rollNo;
    cout << "\nName: " << name;
    cout << "\nMarks: " << marks;
}

int main()
{
    Student s;
    s.accept();
    s.display();

    return 0;
}
