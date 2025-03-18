#include "Vehicle.h"

Vehicle::Vehicle(string b, int s) : brand(b), speed(s) {}

// Vehicle::~Vehicle() {
//     cout << "Destroying Vehicle: " << brand << endl;
// }

int Vehicle::getSpeed() const {
    return speed;
}

void Vehicle::setSpeed(int s) {
    speed = s;
}

void Vehicle::display() const {
    cout << "Vehicle Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
}
