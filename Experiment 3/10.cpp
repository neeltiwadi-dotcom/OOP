#include <iostream>
using namespace std;

class Staff
{
    int ID;
    string post;

public:
    void accept()
    {
        cout << "Enter Staff ID: ";
        cin >> ID;
        cout << "Enter Staff Post: ";
        cin >> post;
    }

    void display()
    {
        cout << "Staff ID: " << ID << endl;
        cout << "Staff Post: " << post << endl;
    }
};

int main()
{
    Staff s[2];

    for(int i = 0; i < 2; i++)
    {
        cout << "\nEnter details of Staff " << i + 1 << endl;
        s[i].accept();
    }

    cout << "\nStaff Details:" << endl;

    for(int i = 0; i < 2; i++)
    {
        cout << "\nStaff " << i + 1 << endl;
        s[i].display();
    }

    return 0;
}
