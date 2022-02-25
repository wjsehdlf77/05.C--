#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    const char *pstr = "Hello world";
    cout << pstr << endl;
    cout << argc << endl;
    for (int i = 0; i < argc; i++) {
        cout << argv[i];
    }

    int numbers[] = {1,2,3,4,5};
    int *p = numbers;

    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << p[3] << endl;

    return 0;
}