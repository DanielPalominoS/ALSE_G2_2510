#include <iostream>

using namespace std;

class Cube {
protected:

private:
    double length; // Private attribute

public:
    // Constructor
    Cube(double l = 1.0) : length(l) {}
    Cube()  {
        length = 1.0;
    }

    // Getter for length
    double getLength() const {
        return length;
    }

    // Setter for length
    void setLength(double l) {
        if (l > 0) // Ensuring valid length
        length = l;
    }

    // Calculate Volume: V = l³
    double getVolume() const {
        return length * length * length;
    }

    // Calculate Surface Area: A = 6 * l²
    double getSurfaceArea() const {
        return 6 * length * length;
    }
};

int main(int argc, char ** argv) {
    
    Cube c(3.0); // Create a cube with length 3
    Cube c2(); // Create a cube with default length 1

    cout << "Length: " << c.getLength() << endl;
    cout << "Volume: " << c.getVolume() << endl;
    cout << "Surface Area: " << c.getSurfaceArea() << endl;

    // Modify the length
    c.setLength(5.0);
    //cout << "Length: " << c.length << endl;
    cout << "\nAfter setting length to 5:\n";
    cout << "Length: " << c.getLength() << endl;
    cout << "Volume: " << c.getVolume() << endl;
    cout << "Surface Area: " << c.getSurfaceArea() << endl;

    return 0;
}
