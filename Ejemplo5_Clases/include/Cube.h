#ifndef CUBE_H
#define CUBE_H

#include <string>
using namespace std;

/**
 * @class Cube
 * @brief Represents a cube with methods to calculate its volume and surface area.
 */
class Cube {
private:
    /**
     * @brief Length of the cube's side.
     */
    double length;

public:
    /**
     * @brief Colour of the cube.
     */
    string colour;

    /**
     * @brief Constructor for the Cube class.
     * @param l Length of the cube's side (default is 1.0).
     */
    Cube(double l = 1.0);

    /**
     * @brief Gets the length of the cube's side.
     * @return Length of the cube's side.
     */
    double getLength() const;

    /**
     * @brief Sets the length of the cube's side.
     * @param l Length to set.
     */
    void setLength(double l);

    /**
     * @brief Calculates the volume of the cube.
     * @return Volume of the cube.
     */
    double getVolume() const;

    /**
     * @brief Calculates the surface area of the cube.
     * @return Surface area of the cube.
     */
    double getSurfaceArea() const;
};

#endif // CUBE_H