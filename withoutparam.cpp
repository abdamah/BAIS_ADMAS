#include <iostream>
using namespace std;
double balance = 100; // global variable

void getBalance()
{
    cout << "Your balance: " << balance << endl;
}

int main()
{
    getBalance();
    return 0;
}