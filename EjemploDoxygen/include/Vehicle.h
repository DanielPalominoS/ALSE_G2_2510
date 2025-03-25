/**
 * @brief Esta es una clase de ejemplo de vehiculos.
 * @author Daniel
 * @date 2023-03-25
 *
 * La clase `Vehicle` representa un vehículo genérico.
 */
#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;  // Protected: Accessible by derived classes
    int speed;     // Private: Cannot be accessed directly by derived classes

public:
    // Constructor
    /**
     * @brief Constructor de la clase Vehicle.
     * @param brand Marca del vehículo.
     * @param speed Velocidad inicial.
     */
    Vehicle(string b, int s);
    /**
     * @brief Constructor de la clase Vehicle. Inicializa la velocidad en 0.
     * @param brand Marca del vehículo.
     */
    Vehicle(string b);

    // Virtual Destructor (important for polymorphism)
    /**
     * @brief Destructor virtual.
     */
    virtual ~Vehicle();

    // Getter & Setter
    /**
     * @brief Obtiene la velocidad del vehículo.
     * @return Velocidad actual del vehículo.
     */
    int getSpeed() const;
    /**
     * @brief Establece la velocidad del vehículo.
     * @param s Velocidad a establecer.
     */ 
    void setSpeed(int s);

    // Virtual method for displaying info
    /**
     * @brief Muestra la información del vehículo.
     */
    virtual void display() const;
};

#endif // VEHICLE_H
