#include <iostream>
using namespace std;

int main()
{
    double length, breadth, area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = length * breadth;

    float areaFloat = (float)area;
    int areaInt = (int)area;

    cout << "Area in Double: " << area << endl;
    cout << "Area in Float: " << areaFloat << endl;
    cout << "Area in Integer: " << areaInt << endl;

    return 0;
}
