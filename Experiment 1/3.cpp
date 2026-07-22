#include <iostream>
using namespace std;

int main()
{
    int units;
    float bill;

    cout << "Enter Units Consumed: ";
    cin >> units;

    if (units <= 100)
        bill = units * 2;
    else if (units <= 200)
        bill = (100 * 2) + (units - 100) * 3;
    else
        bill = (100 * 2) + (100 * 3) + (units - 200) * 5;

    cout << "Electricity Bill = Rs. " << bill;

    return 0;
}
