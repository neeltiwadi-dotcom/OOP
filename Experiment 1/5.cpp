#include <iostream>
using namespace std;

int main()
{
    float A, B, C, X, result;

    cout << "Enter A, B, C: ";
    cin >> A >> B >> C;

    cout << "Enter X: ";
    cin >> X;

    result = A * X * X + B * X + C;

    cout << "Result = " << result;

    return 0;
}
