#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int x, y;
    cout << 'x';
    cin >> x;
    cout << 'y';
    cin >> y;
    if(x > y)
        cout << 'x' << endl;
    else if (x < y)
        cout << 'y' << endl;
    else
        cout << "x, y" << endl;
    return 0;
}