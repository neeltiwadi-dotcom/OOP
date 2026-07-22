#include <iostream>
using namespace std;

int main()
{
    float m1, m2, m3, m4, m5, total, percentage;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "Total = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A+";
    else if (percentage >= 80)
        cout << "Grade: A";
    else if (percentage >= 70)
        cout << "Grade: B";
    else if (percentage >= 60)
        cout << "Grade: C";
    else if (percentage >= 50)
        cout << "Grade: D";
    else
        cout << "Grade: Fail";

    return 0;
}
