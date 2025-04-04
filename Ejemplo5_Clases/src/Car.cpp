#include "Car.h"

Car::Car(string b, int s, int doors, int wheels) : Vehicle(b, s), numDoors(doors), numWheels(wheels) {}
Car::~Car() {
    cout << "Destroying Car: " << brand << endl;
}
 // Getter & Setter
 int Car::getNumDoors() const {
     return numDoors;
 }
 void Car::setNumDoors(int doors) {
     numDoors = doors;
 }
 int Car::getNumWheels() const {
     return numWheels;
 }
 void Car::setNumWheels(int wheels) {
     numWheels = wheels;
 }
void Car::display() const {
    cout << "Car Brand: " << brand 
         << ", Speed: " << speed << " km/h"
         << ", Doors: " << numDoors
         << ", Wheels: " << numWheels << endl;
}
