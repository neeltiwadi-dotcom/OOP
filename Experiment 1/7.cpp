#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double P, R, T, EMI;
    double monthlyRate;
    int months;

    cout << "Enter Loan Amount: ";
    cin >> P;

    cout << "Enter Annual Interest Rate (%): ";
    cin >> R;

    cout << "Enter Time (Years): ";
    cin >> T;

    monthlyRate = R / (12 * 100);
    months = T * 12;

    EMI = (P * monthlyRate * pow(1 + monthlyRate, months)) /
          (pow(1 + monthlyRate, months) - 1);

    cout << "Monthly EMI = " << EMI;

    return 0;
}
