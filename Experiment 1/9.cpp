#include <iostream>
using namespace std;

int main()
{
    float km;

    cout << "Enter Distance in Kilometres: ";
    cin >> km;

    cout << "Metres = " << km * 1000 << endl;
    cout << "Centimetres = " << km * 100000 << endl;
    cout << "Millimetres = " << km * 1000000 << endl;

    return 0;
}
