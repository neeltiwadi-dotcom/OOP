#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double num1, num2;

    cout << "Scientific Calculator\n";
    cout << "1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
    cout << "5.Power\n6.Square Root\n7.Sin\n8.Cos\n9.Log\n";
    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cin >> num1 >> num2;
            cout << "Result = " << num1 + num2;
            break;

        case 2:
            cin >> num1 >> num2;
            cout << "Result = " << num1 - num2;
            break;

        case 3:
            cin >> num1 >> num2;
            cout << "Result = " << num1 * num2;
            break;

        case 4:
            cin >> num1 >> num2;
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Cannot divide by zero";
            break;

        case 5:
            cin >> num1 >> num2;
            cout << "Result = " << pow(num1, num2);
            break;

        case 6:
            cin >> num1;
            cout << "Result = " << sqrt(num1);
            break;

        case 7:
            cin >> num1;
            cout << "Result = " << sin(num1);
            break;

        case 8:
            cin >> num1;
            cout << "Result = " << cos(num1);
            break;

        case 9:
            cin >> num1;
            cout << "Result = " << log(num1);
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
