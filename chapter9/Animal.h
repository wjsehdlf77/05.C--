#include <iostream>
#include <string>
using namespace std;

class Animal 
{
public:
    void speak() {
        cout << "animal sound" << endl;
    }
};

class Dog : public Animal 
{
public:
    void speak() {
        cout << "dog sound" << endl;
    }
};