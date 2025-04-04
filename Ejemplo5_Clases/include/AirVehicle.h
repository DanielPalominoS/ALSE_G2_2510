#ifndef AIR_VEHICLE_H
#define AIR_VEHICLE_H

#include "Vehicle.h"

/**
 * @class AirVehicle
 * @brief Represents an air vehicle, derived from the Vehicle class.
 */
class AirVehicle : public Vehicle {
private:
    /**
     * @brief Altitude of the air vehicle in meters.
     */
    int altitude;

    /**
     * @brief Indicates whether the air vehicle is a multirotor.
     */
    bool isMultirotor;

public:
    /**
     * @brief Constructor for the AirVehicle class.
     * @param b Brand of the vehicle.
     * @param s Speed of the vehicle.
     * @param alt Altitude of the air vehicle.
     */
    AirVehicle(string b, int s, int alt);

    /**
     * @brief Displays the details of the air vehicle.
     */
    void display() const override;
};

#endif // AIR_VEHICLE_H