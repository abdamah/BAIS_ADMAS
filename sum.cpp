#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int add;
    int sub;
    int mult;
    int div;
    int mod;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    add = a + b;
    cout << "add: " << add << endl;

    mod = a % b;
    cout << "mod: " << mod << endl;

    return 0;
}