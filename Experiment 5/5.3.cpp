#include<iostream>
using namespace std;

inline float area(float r)
{
    return 3.14 * r * r;
}

int main()
{
    float r;
    cout << "Enter radius: ";
    cin >> r;

    cout << "Area of Circle = " << area(r);

    return 0;
}
