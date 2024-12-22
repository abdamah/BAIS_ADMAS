#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int choice;

    while (choice != 3)
    {
        // cout <<"1.Add " <<endl;
        // cout <<"2.Sub " <<endl;
        // cout <<"3.Exit " <<endl;
        cout << "1.Add\n 2.Sub\n 3.Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;

            cout << a + b << endl;
            break;
        case 2:
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;

            cout << a - b << endl;
            break;
        case 3:
            cout << "Thanks\n";
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}