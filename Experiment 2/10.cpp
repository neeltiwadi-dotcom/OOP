#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string subject[5] = {"Math", "Science", "English", "Computer", "Physics"};
    int marks[5] = {90, 88, 85, 95, 92};

    cout << left << setw(15) << "Subject"
         << setw(10) << "Marks" << endl;

    cout << "------------------------" << endl;

    for(int i=0;i<5;i++)
    {
        cout << left << setw(15) << subject[i]
             << setw(10) << marks[i] << endl;
    }

    return 0;
}
