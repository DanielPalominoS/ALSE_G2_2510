// fichero complejo.h

#ifndef __COMPLEJO_H__
#define __COMPLEJO_H__

#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
    // Constructores
    Complex(void);
    Complex(double, double im = 0.0);
    Complex(const Complex&);

    // SetThings
    void SetData(void);
    void SetReal(double);
    void SetImag(double);

    // GetThings
    double GetReal(void) { return real; }
    double GetImag(void) { return imag; }

    // Sobrecarga de operadores aritméticos
    Complex operator+ (const Complex&);
    Complex operator- (const Complex&);
    Complex operator* (const Complex&);
    Complex operator/ (const Complex&);

    // Sobrecarga del operador de asignación
    Complex& operator= (const Complex&);

    // Sobrecarga de operadores de comparación
    friend int operator== (const Complex&, const Complex&);
    friend int operator!= (const Complex&, const Complex&);

    // Sobrecarga del operador de inserción en el flujo de salida
    friend ostream& operator<< (ostream&, const Complex&);
};

#endif
