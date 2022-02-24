#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long fact = 1;
    int n;

    cout << "int : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    cout << n << "! = " << fact << endl;
    
    return 0;
}