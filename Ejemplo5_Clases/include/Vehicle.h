#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle {
private:
    int speed; // Encapsulated attribute

public:
    string brand;

    // Constructor
    Vehicle(string b, int s);

    // Public method
    void display();
};

#endif // VEHICLE_H
