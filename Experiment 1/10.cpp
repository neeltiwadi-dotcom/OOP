#include <iostream>
using namespace std;

int main()
{
    float marks[6], total = 0, percentage, average;
    bool pass = true;

    cout << "Enter marks of 6 subjects:\n";

    for (int i = 0; i < 6; i++) {
        cin >> marks[i];
        total += marks[i];

        if (marks[i] < 35)
            pass = false;
    }

    average = total / 6;
    percentage = (total / 600) * 100;

    cout << "\nTotal = " << total << endl;
    cout << "Average = " << average << endl;
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

    cout << endl;

    if (pass)
        cout << "Result: PASS";
    else
        cout << "Result: FAIL";

    return 0;
}
