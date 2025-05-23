#include "Cube.h"

// Constructor
Cube::Cube(double l) : length(l) {
    colour = "No colour";
}

// Getter for length
double Cube::getLength() const {
    return length;
}

// Setter for length
void Cube::setLength(double l) {
    if (l > 0) // Ensuring valid length
        length = l;
}

// Calculate Volume: V = l³
double Cube::getVolume() const {
    return length * length * length;
}

// Calculate Surface Area: A = 6 * l²
double Cube::getSurfaceArea() const {
    // Complex c1(3, 4), c2(1, 2);
    // c1.real=5;
    // c1.SetReal(5);
    return 6 * length * length;
}
