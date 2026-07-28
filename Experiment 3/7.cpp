#include <iostream>
using namespace std;

class Circle
{
    float radius, area;

public:
    void accept()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void calculate()
    {
        area = 3.14 * radius * radius;
    }

    void display()
    {
        cout << "Area of circle = " << area;
    }
};

int main()
{
    Circle c;
    c.accept();
    c.calculate();
    c.display();

    return 0;
}
