#include <iostream>
#include "Car.h"


int main(int argc, char const *argv[])
{
    Car myCar;

    myCar.speed = 100;
    myCar.gear = 3;
    myCar.color = "red";

    myCar.speedUp();
    cout << myCar.speed << endl;
    myCar.speedDown();
    cout << myCar.speed << endl;
    return 0;
}