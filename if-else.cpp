#include <iostream>
using namespace std;
int main()
{

    int score;

    cout << "Enter score:";
    cin >> score;

    if (score > 60)
    {
        cout << "Passed!!" << endl;
    }
    else
    {
        cout << "Failed!!" << endl;
    }
    return 0;
}