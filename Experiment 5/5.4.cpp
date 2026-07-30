#include<iostream>
using namespace std;

inline float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;
    cout << "Enter Principal, Rate and Time: ";
    cin >> p >> r >> t;

    cout << "Simple Interest = " << simpleInterest(p, r, t);

    return 0;
}
