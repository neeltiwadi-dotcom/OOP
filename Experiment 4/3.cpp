#include <iostream>
using namespace std;

class Box
{
    float length, width, height;

public:
    void accept();
    void calculate();
};

void Box::accept()
{
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;
}

void Box::calculate()
{
    float volume = length * width * height;
    cout << "Volume of Box = " << volume;
}

int main()
{
    Box b;
    b.accept();
    b.calculate();

    return 0;
}
