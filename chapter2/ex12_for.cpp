#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;

    int value;
    cout << "value : ";
    cin >> value;

    for (int i = 0; i <= value; i++){
        sum += i;
    }

    cout << "1 ~ " << value << " sum = " << sum << endl;
    return 0;
}