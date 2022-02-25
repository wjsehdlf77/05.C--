#include <iostream>
#include <string>
using namespace std;
#pragma once

class PrinData
{
    public:
        void print(int i) {cout << i << endl;}
        void print(double f) {cout << f << endl;}
        void print(string s = "No Data!") {cout << s << endl;}
};