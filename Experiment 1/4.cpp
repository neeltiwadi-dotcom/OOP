#include <iostream>
using namespace std;

int main()
{
    float weight, height, bmi;

    cout << "Enter Weight (kg): ";
    cin >> weight;

    cout << "Enter Height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "BMI = " << bmi << endl;

    if (bmi < 18.5)
        cout << "Underweight";
    else if (bmi < 25)
        cout << "Normal";
    else if (bmi < 30)
        cout << "Overweight";
    else
        cout << "Obese";

    return 0;
}
