#include "Car.h"

Car::Car(string b, int s, int doors, int wheels) : Vehicle(b, s), numDoors(doors), numWheels(wheels) {}

void Car::display() const {
    cout << "Car Brand: " << brand << ", Speed: " << speed 
         << " km/h, Doors: " << numDoors << endl;
}
