#include <iostream>
using namespace std;
int main()
{
    int i = 1;

    while (i <= 10)
    {
        cout << i << endl;
        // increment
        i++;
    }

    int result = 1;
    int j = 1;

    while (j <= 5)
    {
        result = result * j;
        j++;
    }
    cout << "result =" << result << endl;

    return 0;
}