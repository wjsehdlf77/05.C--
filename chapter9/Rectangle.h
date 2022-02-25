#include "Shape.h"

class Rectangle : public Shape
{
int width, height;
public:
    Rectangle(){
        cout << "Rectangle()" << endl;
    }
    Rectangle(int x, int y, int w, int h) : Shape(x, y), width(w), height(h){
        cout << "Rectangle(x, y, w, h)" << endl;
    }

    ~Rectangle() {
        cout << "~Rectangle()" << endl;
    }
};
