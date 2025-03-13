// funciones y operadores de la clase complejo
#include "Complex.h"

// Constructor por defecto
Complex::Complex(void) {
    real = 0.0;
    imag = 0.0;
}

// Constructor general
Complex::Complex(double re, double im) {
    real = re;
    imag = im;
}

// Constructor de copia
Complex::Complex(const Complex& c) {
    real = c.real;
    imag = c.imag;
}

// Función miembro SetData()
void Complex::SetData(void) {
    cout << "Introduzca el valor real del complejo: ";
    cin >> real;
    cout << "Introduzca el valor imaginario del complejo: ";
    cin >> imag;
}

void Complex::SetReal(double re) {
    real = re;
}

void Complex::SetImag(double im) {
    imag = im;
}

// Operador miembro + sobrecargado
Complex Complex::operator+ (const Complex &a) {
    Complex suma;
    suma.real = real + a.real;
    suma.imag = imag + a.imag;
    return suma;
}

// Operador miembro - sobrecargado
Complex Complex::operator- (const Complex &a) {
    Complex resta;
    resta.real = real - a.real;
    resta.imag = imag - a.imag;
    return resta;
}

// Operador miembro * sobrecargado
Complex Complex::operator* (const Complex &a) {
    Complex producto;
    producto.real = real * a.real - imag * a.imag;
    producto.imag = real * a.imag + a.real * imag;
    return producto;
}

// Operador miembro / sobrecargado
Complex Complex::operator/ (const Complex &a) {
    Complex cociente;
    double d = a.real * a.real + a.imag * a.imag;
    cociente.real = (real * a.real + imag * a.imag) / d;
    cociente.imag = (-real * a.imag + imag * a.real) / d;
    return cociente;
}

// Operador miembro de asignación sobrecargado
Complex& Complex::operator= (const Complex &a) {
    real = a.real;
    imag = a.imag;
    return (*this);
}

// Operador friend de test de igualdad sobrecargado
int operator== (const Complex& a, const Complex& b) {
    return (a.real == b.real && a.imag == b.imag);
}

// Operador friend de test de desigualdad sobrecargado
int operator!= (const Complex& a, const Complex& b) {
    return (a.real != b.real || a.imag != b.imag);
}

// Operador friend << sobrecargado
// ostream& operator<< (ostream& co, const Complex &a) {
//     co << a.real;
//     long fl = co.setf(ios::showpos);
//     co << a.imag << "i";
//     co.flags(fl);
//     return co;
// }
