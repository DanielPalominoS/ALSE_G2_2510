#include "AirVehicle.h"

AirVehicle::AirVehicle(string b, int s, int alt) : Vehicle(b, s), altitude(alt) {}

void AirVehicle::display() const {
    cout << "Air Vehicle Brand: " << brand << ", Speed: " << speed 
         << " km/h, Altitude: " << altitude << " meters" << endl;
}
