#include "Complex.h"
#include "Cube.h"
#include "Vehicle.h"

int main() {
    Complex c1(3, 4), c2(1, 2);
    c1.display();
    c2.display();
    Complex sum = c1 + c2;
    sum.display();
    return 0;
}