#include <iostream>
#include <string>
using namespace std;
#include "Print.h"

int main(int argc, char const *argv[])
{
    PrinData prn;

    prn.print(1);
    prn.print(3.14);
    prn.print("C++ is cool.");
    prn.print();
    return 0;
}