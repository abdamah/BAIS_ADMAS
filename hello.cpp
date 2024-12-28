#include <iostream>
using namespace std;

// function declaration(signature/prototype)
void hello();
void greet();

void sayHello(string name)
{
    cout << "H!!, " << name << endl;
}

int main()
{
    // funciton calling
    // hello();
    // greet();

    sayHello("Abdallah");
    sayHello("Ahmed");
    sayHello("Kader");
    sayHello("Yasin");

    return 0;
}

// function definition

void hello()
{
    cout << "Hello world" << endl;
}

void info()
{
    cout << "Information about" << endl;
}
void greet()
{
    cout << "Hi there!!" << endl;
    info();
}