#include <iostream>
using namespace std;

int main()
{
    float celcius;
    float fahrenheit = 33;

    celcius = (fahrenheit - 32) * (5.0 / 9.0);

    cout << celcius << endl;

    return 0;
}