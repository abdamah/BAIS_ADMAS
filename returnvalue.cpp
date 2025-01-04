#include <iostream>
using namespace std;

float calculateTax(float amount)
{
    float tax = amount * 1.2;

    return tax;
}

int main()
{

    // calling
    // float tax = calculateTax(100.0);
    // cout << tax << endl;

    cout << calculateTax(100) << endl;

    return 0;
}