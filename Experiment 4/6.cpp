#include <iostream>
using namespace std;

class Square
{
    int num;

public:
    void calculate()
    {
        cout << "Enter a number: ";
        cin >> num;

        cout << "Square = " << num * num;
    }
};

int main()
{
    Square s;
    s.calculate();

    return 0;
}
