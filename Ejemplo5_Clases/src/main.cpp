#include "Complex.h"
#include "Cube.h"
#include "Vehicle.h"
#include "Car.h" // Assuming Car is a derived class of Vehicle
#include "AirVehicle.h" // Assuming AirVehicle is a derived class of Vehicle

int main() {
    // Complex class examples
    Complex c1(3, 4), c2(1, 2);
    c1.display();
    c2.display();
    Complex sum = c1 + c2;
    sum.display();
    Complex diff = c1 - c2;
    diff.display();
    Complex prod = c1 * c2;
    prod.display();
    Complex quot = c1 / c2;
    quot.display();
    // std::cout << "Magnitude of c1: " << c1.magnitude() << std::endl;
    // std::cout << "Magnitude of c2: " << c2.magnitude() << std::endl;
    // std::cout << "Phase of c1: " << c1.phase() << std::endl;
    // std::cout << "Phase of c2: " << c2.phase() << std::endl;
    std::cout << "c1 == c2: " << (c1 == c2) << std::endl;
    std::cout << "c1 != c2: " << (c1 != c2) << std::endl;
    std::cout << "c1 < c2: " << (c1 < c2) << std::endl;

    // Cube class examples
    Cube cube1(3.0);
    cube1.getVolume();
    cube1.getSurfaceArea();
    std::cout << "Cube 1 Volume: " << cube1.getVolume() << std::endl;
    std::cout << "Cube 1 Surface Area: " << cube1.getSurfaceArea() << std::endl;
    Cube cube2(4.5);
    cube2.getVolume();
    cube1.getSurfaceArea();
    std::cout << "Cube 1 Volume: " << cube1.getVolume() << std::endl;
    std::cout << "Cube 1 Surface Area: " << cube1.getSurfaceArea() << std::endl;
    cube2.setLength(5.0);
    std::cout << "Cube 2 New Volume: " << cube2.getVolume() << std::endl;
    std::cout << "Cube 2 New Surface Area: " << cube2.getSurfaceArea() << std::endl;
    std::cout << "Cube 1 Colour: " << cube1.colour << std::endl;
    std::cout << "Cube 2 Colour: " << cube2.colour << std::endl;
    cube1.colour = "Red";
    cube2.colour = "Blue";
    std::cout << "Cube 1 New Colour: " << cube1.colour << std::endl;
    std::cout << "Cube 2 New Colour: " << cube2.colour << std::endl;

    // Vehicle class examples
    Vehicle vehicle1("Toyota", 120);
    vehicle1.display();
    vehicle1.setSpeed(130);
    vehicle1.display();

    // Car class examples (assuming Car is derived from Vehicle)
    Car car1("Honda", 150, 4);
    car1.display();
    car1.setSpeed(160);
    car1.display();

    // AirVehicle class examples (assuming AirVehicle is derived from Vehicle)
    AirVehicle airVehicle1("Boeing", 900, 30000);
    airVehicle1.display();
    airVehicle1.setSpeed(950);
    airVehicle1.display();

    return 0;
}