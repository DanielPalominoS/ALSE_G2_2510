#include <iostream>
using namespace std;

// Defining a Vehicle class
class Vehicle {
private:
    int speed; // Encapsulated attribute

public:
    string brand;

    // Constructor
    Vehicle(string b, int s) : brand(b), speed(s) {}
    Vehicle(string b): brand(b){
        speed=0;
    }
    Vehicle(int  s){
        speed=s;
        brand="Generic";
    }

    // Public method
    void display() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Vehicle car1("Toyota", 120);
    Vehicle car2(3.0);
    Vehicle car3("Renault");
    car1.display();
    car2.display();
    car3.brand="Toyota";
    return 0;
}

