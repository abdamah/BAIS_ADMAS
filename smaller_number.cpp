#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;

    cout << "a=" << a << ", b=" << b << endl;

    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else if (a == b)
    {
        cout << "a and b are equal" << endl;
    }
    else
    {
        cout << "a is less than b" << endl;
    }

    return 0;
}