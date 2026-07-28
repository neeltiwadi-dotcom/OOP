#include <iostream>
using namespace std;

int main()
{
    float f;
    int i;

    cout << "Enter a float value: ";
    cin >> f;

    cout << "Enter an integer value: ";
    cin >> i;

    int a = (int)f;
    float b = (float)i;

    cout << "Float to Integer: " << a << endl;
    cout << "Integer to Float: " << b << endl;

    return 0;
}
