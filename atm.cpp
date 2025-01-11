#include <iostream>
using namespace std;

double balance = 500.00;

void showMenu()
{
    cout << "1.Check balance\n";
    cout << "2.Deposit\n";
    cout << "3.Withdraw\n";
    cout << "4.Exit\n";
}

void checkBalance()
{
    cout << "\nYour balance $" << balance << endl
         << endl;
}

void deposit(double amount)
{
    balance = balance + amount;
    cout << "You deposit $" << amount << " sucessfully" << endl;
}

double withdraw(double amount)
{
    balance = balance - amount;
    return amount;
}

void choice()
{
    double amount;
    double amt;
    int choice;

    while (choice != 4)
    {
        showMenu();

        cout << "Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            checkBalance();
            break;
        case 2:
            cout << "Enter amount to deposit:";
            cin >> amount;
            deposit(amount);
            break;
        case 3:
            cout << "Enter amount to withdraw:";
            cin >> amount;
            amt = withdraw(amount);
            cout << "You withdraw $" << amt << "successfully." << endl;
            break;

        case 4:
            cout << "Thanks for our ATM\n\n";
            break;

        default:
            cout << "Invalid choice." << endl;
        }
    }
}

int main()
{

    choice();
    return 0;
}