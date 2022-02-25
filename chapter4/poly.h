#include <iostream>
#include <string>
using namespace std;
#pragma once

class Shape {
    protected:
        int x, y;
    public:
    void draw() {}
    void move() {} 
};

class Reactangle: public Shape {
    protected:
        int width;
        int height;
    public:
        int clacArea() {
            return width * height;
        }
};