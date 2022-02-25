#include <iostream>
using namespace std;

int main()
{
    int number = 1000;
    int number2 = 100;

    int *p = &number;
    cout << p << endl;
    cout << *p << endl;

    p = &number2;
    cout << p << endl;
    cout << *p << endl;
    return 0;
}