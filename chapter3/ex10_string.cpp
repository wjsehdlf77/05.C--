#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string list[] = {"doyle", "do il", "toyle"};

    for (auto& name : list) {
        cout << name << endl;
    }
    return 0;
}