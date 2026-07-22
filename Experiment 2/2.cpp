#include <iostream>
using namespace std;

class Demo
{
public:
    void display();
};

void Demo::display()
{
    cout << "Hello";
}

int main()
{
    Demo d;
    d.display();
    return 0;
}
