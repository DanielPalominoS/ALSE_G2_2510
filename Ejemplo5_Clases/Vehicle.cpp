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
    // Destructor
    virtual ~Vehicle() {
        // Destructor logic (if any)
        cout << "Vehicle object with brand " << brand << " is being destroyed." << endl;
    }
    // Getter for speed
    int getSpeed() const {
        return speed;
    }
    // Setter for speed
    void setSpeed(int s) {
        if (s < 0) {
            cout << "Speed cannot be negative. Setting to 0." << endl;
            speed = 0; // Ensure speed is non-negative
        } else {
            speed = s;
        }
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

