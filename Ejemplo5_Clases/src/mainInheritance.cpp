#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "AirVehicle.h"

int main() {
    Vehicle* v1 = new Car("Toyota", 180, 4);
    Vehicle* v2 = new AirVehicle("Boeing", 900, 10000);

    v1->display();
    v2->display();

    delete v1; // Proper cleanup due to virtual destructor
    delete v2;

    return 0;
}
