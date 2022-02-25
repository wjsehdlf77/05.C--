#include <iostream>
using namespace std;

class Circle 
{
public:
    int x, y;
    int radius;
    
    Circle(): x(0), y(0), radius(0) {}
    Circle(int x, int y, int r) : x(x), y(y), radius(r) {}

    void print() {
        cout << "pi :" << radius << "@("<< x << ","<< y << ")" << endl;
    }
};