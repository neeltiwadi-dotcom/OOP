#include <iostream>
using namespace std;

class Product
{
    int productId;
    string productName;
    float price;

public:
    void accept();
    void display();
};

void Product::accept()
{
    cout << "Enter Product ID: ";
    cin >> productId;

    cout << "Enter Product Name: ";
    cin >> productName;

    cout << "Enter Price: ";
    cin >> price;
}

void Product::display()
{
    cout << "\nProduct Details";
    cout << "\nProduct ID: " << productId;
    cout << "\nProduct Name: " << productName;
    cout << "\nPrice: " << price;
}

int main()
{
    Product p;
    p.accept();
    p.display();

    return 0;
}
