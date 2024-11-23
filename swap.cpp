// Example
//  Write a program that swaps two integer numbers

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int temp = 0;

    cout << "Before swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // logic(swap);
    temp = a;
    a = b;
    b = temp;

    cout << "After swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}