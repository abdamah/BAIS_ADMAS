// Write a program that checks whether the given number is even or odd.

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "odd number" << endl;
    }
}