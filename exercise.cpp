#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 5; i > 0; i = i - 2)
    {
        cout << i << " ";
    }

    cout << endl;

    int j = 2;
    do
    {
        cout << j << " ";
        j++;
    } while (j < 3);
    cout << endl;

    return 0;
}