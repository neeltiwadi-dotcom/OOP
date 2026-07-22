#include <iostream>
using namespace std;

namespace Physics
{
    string subject = "Physics";
}

namespace Chemistry
{
    string subject = "Chemistry";
}

int main()
{
    cout << Physics::subject << endl;
    cout << Chemistry::subject << endl;

    return 0;
}
