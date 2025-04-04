#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

/**
 * @class Vehicle
 * @brief Represents a generic vehicle with basic attributes and methods.
 */
class Vehicle {
protected:
    /**
     * @brief Brand of the vehicle.
     * @note This attribute is protected, so it is accessible by derived classes.
     */
    string brand;

    /**
     * @brief Speed of the vehicle in km/h.
     */
    int speed;

public:
    /**
     * @brief Constructor for the Vehicle class.
     * @param b Brand of the vehicle.
     * @param s Speed of the vehicle in km/h.
     */
    Vehicle(string b, int s);

    /**
     * @brief Constructor for the Vehicle class with only the brand.
     * @param b Brand of the vehicle.
     */
    Vehicle(string b);

    /**
     * @brief Virtual destructor for the Vehicle class.
     * @note This is important for proper cleanup in polymorphic use cases.
     */
    virtual ~Vehicle();

    /**
     * @brief Gets the speed of the vehicle.
     * @return Speed of the vehicle in km/h.
     */
    int getSpeed() const;

    /**
     * @brief Sets the speed of the vehicle.
     * @param s Speed to set in km/h.
     */
    void setSpeed(int s);

    /**
     * @brief Displays the details of the vehicle.
     * @note This is a virtual method and can be overridden by derived classes.
     */
    virtual void display() const;
};

#endif // VEHICLE_H
