#include "Time.h"

int main() {
    Time a;
    Time b(10, 25);
    Time c{10, 25};
    Time d={10, 25};


    a.print();
    b.print();
    c.print();
    d.print();
    return 0;

}