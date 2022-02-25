#include <iostream>
#include <string>
using namespace std;

class SuperClass 
{
public:
    void print() {
        cout << "SuperClass's print()" << endl;
    }
};

class ChildClass : public SuperClass 
{
public:
    void print() {
        SuperClass :: print();
        cout << "ChildClass's print()" << endl;
    }
};