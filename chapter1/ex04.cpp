#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    bool b;
    b = true;

    cout << b << endl;
    cout << boolalpha;
    cout << b << endl;
    b = false;
    cout << b << endl;
    return 0;

}