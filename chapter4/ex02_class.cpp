#include <iostream>
#include <string>
#include "Circle.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    Circle pizza1, pizza2;

    pizza1.radius = 100;
    pizza1.color = "yellow";
    cout << "pizza's area " << pizza1.calcArea() << endl;

    pizza2.radius = 200;
    pizza2.color = "white";
    cout << "pizza's area " << pizza2.calcArea() << endl;

    return 0;
}