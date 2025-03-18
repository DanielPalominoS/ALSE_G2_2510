#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;
    int numWheels;

public:
    // Constructor
    Car(string b, int s, int doors, int wheels = 4);

    // Override display method
    void display() const override;
};

#endif // CAR_H
