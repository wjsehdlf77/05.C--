#include <iostream>
#include <string>
using namespace std;

class Shape 
{
int x, y;
public:
    Shape() {
        cout << "Shape()" << endl;

    }

    Shape(int xloc, int yloc) : x(xloc), y(yloc) {
        cout << "Shape(xloc, yloc)" << endl;
    }
    ~Shape(){
        cout << "~Shape" << endl;
    }
};