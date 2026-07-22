#include <iostream>
using namespace std;

int main()
{
    float price, gst, gstAmount, finalPrice;

    cout << "Enter Product Price: ";
    cin >> price;

    cout << "Enter GST Percentage: ";
    cin >> gst;

    gstAmount = (price * gst) / 100;
    finalPrice = price + gstAmount;

    cout << "GST Amount = Rs. " << gstAmount << endl;
    cout << "Final Payable Amount = Rs. " << finalPrice;

    return 0;
}
