#include <iostream>
#include "Circle.h" //현재 디렉토리에서 먼저 찾아라
//#include <Circle.cpp> 라이브러리 디렉토리에서 찾아라



int main(int argc, char const *argv[])
{
    Circle obj;
    obj.radius = 100;
    obj.color = "blue";

    cout << "circle area " << obj.calcArea() << endl;
    return 0;
}