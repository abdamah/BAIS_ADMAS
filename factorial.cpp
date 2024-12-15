#include <iostream>
using namespace std;
int main()
{

    int result = 1;

    for (int i = 1; i <= 5; i++)
    {
        result = result * i;
    }

    // for (int i = 5; i >= 1; i--)
    // {
    //     result = result * i;
    // }

    cout << "result = " << result << endl;

    return 0;
}