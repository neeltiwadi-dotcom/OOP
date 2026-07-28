#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:
    void accept();
    void area();

};

void Rectangle::accept()
{
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;
}

void Rectangle::area()
{
    cout << "Area of Rectangle = " << length * breadth;
}

int main()
{
    Rectangle r;
    r.accept();
    r.area();

    return 0;
}
