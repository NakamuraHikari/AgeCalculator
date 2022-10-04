#include <iostream>
#include <unistd.h>
#include <windows.h>
using namespace std;

void TextColor(int x)
{
     HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}
int main()
{
    double a;
        TextColor(3);
        cout << "Smart Age Calculator" << '\n'<< '\n';
        cout << "-------------------------------------------" <<'\n';
        TextColor(6);
        cout << ">>> Please enter your age: "; cin >>a;
        TextColor(2);
        cout << "Loading Engine..." << '\n';
        cout << "Load 0%..." << '\n';
        sleep(3);
        cout << "Load 10%..." << '\n';
        sleep(3);
        cout << "Load 20%..." << '\n';
        sleep(3);
        cout << "Load 30%..." << '\n';
        sleep(5);
        cout << "Load 50%..." << '\n';
        sleep(6);
        cout << "Load 70%..." << '\n';
        sleep(7);
        cout << "Load 90%..." << '\n';
        sleep(10);
        cout << "Load 100%..." << '\n';
        cout << "All things have done..." << '\n' << '\n';
        sleep(4);
        TextColor(4);
        cout << " >>> You are: " << a << "years old!" << '\n';
    return 0;
}
