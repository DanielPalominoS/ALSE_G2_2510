#include <iostream>
#include "Cube.h"

int main() {
    // Create a few Cube objects with different side lengths
    Cube cube1(3.0);
    Cube cube2(4.5);
    Cube cube3(2.0);

    // Print the volume and surface area of each cube
    std::cout << "Cube 1: " << std::endl;
    std::cout << "Volume: " << cube1.getVolume() << std::endl;
    std::cout << "Surface Area: " << cube1.getSurfaceArea() << std::endl;

    std::cout << "Cube 2: " << std::endl;
    std::cout << "Volume: " << cube2.getVolume() << std::endl;
    std::cout << "Surface Area: " << cube2.getSurfaceArea() << std::endl;

    std::cout << "Cube 3: " << std::endl;
    std::cout << "Volume: " << cube3.getVolume() << std::endl;
    std::cout << "Surface Area: " << cube3.getSurfaceArea() << std::endl;

    return 0;
}