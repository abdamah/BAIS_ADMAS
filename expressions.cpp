#include <iostream>
using namespace std;

int main()
{
    // arithmetics
    cout << "add " << 2 + 4 << endl;
    cout << "sub " << 2 - 4 << endl;
    cout << "mul " << 2 * 4 << endl;
    cout << "div " << 2.0 / 4 << endl;
    cout << "mod " << 4 % 2 << endl;

    // logical

    cout << "AND: TRUE(1) ->" << (3 > 2 && 4 > 3) << endl;
    cout << "AND: FALSE(0) ->" << (1 > 2 && 4 > 3) << endl;
    cout << "AND: FLASE(0) ->" << (3 > 2 && 2 > 3) << endl;
    cout << "AND: FLASE(0) ->" << (1 > 2 && 2 > 3) << endl
         << endl;

    cout << "OR: TRUE(1) ->" << (3 > 2 || 4 > 3) << endl;
    cout << "OR: TRUE(1) ->" << (1 > 2 || 4 > 3) << endl;
    cout << "OR: TRUE(1) ->" << (3 > 2 || 2 > 3) << endl;
    cout << "OR: FLASE(0) ->" << (1 > 2 || 2 > 3) << endl
         << endl;

    cout << "EQUEAL: TRUE(1) ->" << (1 == 1) << endl;
    cout << "NOT(!): FLASE(0) ->" << (1 != 1) << endl;

    // Increment
    int i = 3;
    int j = 5;
    cout << "Post increment: " << i++ << endl; // i = 3
    cout << i << endl;                         // i = 4

    cout << "Pre increment: " << ++j << endl; // j= 6
    cout << i << endl;                        // j = 6

    return 0;
}