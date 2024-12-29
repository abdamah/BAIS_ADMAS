#include <iostream>
using namespace std;

int factorial()
{
    int result = 1;

    int number;
    cout << "Enter a number:";
    cin >> number;

    for (int i = 2; i <= number; i++)
    {
        result = result * i;
    }

    return result;
}
int main()
{

    int result = factorial();

    cout << result << endl;

    return 0;
}