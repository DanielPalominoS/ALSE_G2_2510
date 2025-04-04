#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

/**
 * @class Car
 * @brief Represents a car, derived from the Vehicle class.
 */
class Car : public Vehicle {
private:
    /**
     * @brief Number of doors in the car.
     */
    int numDoors;

    /**
     * @brief Number of wheels in the car.
     */
    int numWheels;

public:
    /**
     * @brief Constructor for the Car class.
     * @param b Brand of the car.
     * @param s Speed of the car.
     * @param doors Number of doors in the car.
     * @param wheels Number of wheels in the car (default is 4).
     */
    Car(string b, int s, int doors, int wheels = 4);

    /**
     * @brief Destructor for the Car class.
     */
    ~Car() override; // Destructor to clean up resources, if any

    /**
     * @brief Gets the number of doors in the car.
     * @return Number of doors.
     */
    int getNumDoors() const;

    /**
     * @brief Sets the number of doors in the car.
     * @param doors Number of doors to set.
     */
    void setNumDoors(int doors);

    /**
     * @brief Gets the number of wheels in the car.
     * @return Number of wheels.
     */
    int getNumWheels() const;

    /**
     * @brief Sets the number of wheels in the car.
     * @param wheels Number of wheels to set.
     */
    void setNumWheels(int wheels);

    /**
     * @brief Displays the details of the car.
     */
    void display() const override;
};

#endif // CAR_H