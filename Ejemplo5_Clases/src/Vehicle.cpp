#include "Vehicle.h"

// Constructor definition
Vehicle::Vehicle(string b, int s) : brand(b), speed(s) {}

// Method definition
void Vehicle::display() {
    cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
}
