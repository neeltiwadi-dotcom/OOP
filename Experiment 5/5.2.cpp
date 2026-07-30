#include<iostream>
using namespace std;

inline maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Maximum = " << maximum(a, b);

    return 0;
}
