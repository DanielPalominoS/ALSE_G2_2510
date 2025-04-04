// fichero complejo.h

#ifndef __COMPLEJO_H__
#define __COMPLEJO_H__

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/**
 * @class Complex
 * @brief Represents a complex number and provides operations for complex arithmetic.
 */
class Complex {
private:
    /**
     * @brief Real part of the complex number.
     */
    double real;

    /**
     * @brief Imaginary part of the complex number.
     */
    double imag;

public:
    /**
     * @brief Name associated with the complex number.
     */
    string nombre;

    // Constructors

    /**
     * @brief Default constructor for the Complex class.
     */
    Complex(void);

    /**
     * @brief Constructor with real and imaginary parts.
     * @param re Real part of the complex number.
     * @param im Imaginary part of the complex number (default is 0.0).
     */
    Complex(double re, double im = 0.0);

    /**
     * @brief Copy constructor for the Complex class.
     * @param other Another Complex object to copy from.
     */
    Complex(const Complex& other);

    /**
     * @brief Adds two double values.
     * @param a First value.
     * @param b Second value.
     * @return Sum of the two values as a float.
     */
    float add(double a, double b);

    /**
     * @brief Adds two integer values.
     * @param a First value.
     * @param b Second value.
     * @return Sum of the two values as an integer.
     */
    int add(int a, int b);

    // Setters

    /**
     * @brief Sets the data for the complex number.
     */
    void SetData(void);

    /**
     * @brief Sets the real part of the complex number.
     * @param re Real part to set.
     */
    void SetReal(double re);

    /**
     * @brief Sets the imaginary part of the complex number.
     * @param im Imaginary part to set.
     */
    void SetImag(double im);

    // Getters

    /**
     * @brief Gets the real part of the complex number.
     * @return Real part of the complex number.
     */
    double GetReal(void) { return real; }

    /**
     * @brief Gets the imaginary part of the complex number.
     * @return Imaginary part of the complex number.
     */
    double GetImag(void) { return imag; }

    // Operator Overloads

    /**
     * @brief Overloads the addition operator for complex numbers.
     * @param other Another Complex object to add.
     * @return Sum of the two complex numbers.
     */
    Complex operator+ (const Complex& other);

    /**
     * @brief Unary plus operator overload.
     * @return The same Complex object.
     */
    Complex operator+ ();

    /**
     * @brief Overloads the subtraction operator for complex numbers.
     * @param other Another Complex object to subtract.
     * @return Difference of the two complex numbers.
     */
    Complex operator- (const Complex& other);

    /**
     * @brief Overloads the multiplication operator for complex numbers.
     * @param other Another Complex object to multiply.
     * @return Product of the two complex numbers.
     */
    Complex operator* (const Complex& other);

    /**
     * @brief Overloads the division operator for complex numbers.
     * @param other Another Complex object to divide by.
     * @return Quotient of the two complex numbers.
     */
    Complex operator/ (const Complex& other);

    /**
     * @brief Overloads the assignment operator for complex numbers.
     * @param other Another Complex object to assign from.
     * @return Reference to the assigned Complex object.
     */
    Complex& operator= (const Complex& other);

    // Comparison Operators

    /**
     * @brief Overloads the equality operator for complex numbers.
     * @param lhs Left-hand side Complex object.
     * @param rhs Right-hand side Complex object.
     * @return 1 if the two complex numbers are equal, 0 otherwise.
     */
    friend int operator== (const Complex& lhs, const Complex& rhs);

    /**
     * @brief Overloads the inequality operator for complex numbers.
     * @param lhs Left-hand side Complex object.
     * @param rhs Right-hand side Complex object.
     * @return 1 if the two complex numbers are not equal, 0 otherwise.
     */
    friend int operator!= (const Complex& lhs, const Complex& rhs);

    // Stream Operators

    /**
     * @brief Overloads the insertion operator for output streams.
     * @param os Output stream.
     * @param c Complex object to insert into the stream.
     * @return Reference to the output stream.
     */
    friend ostream& operator<< (ostream& os, const Complex& c);

    // Additional Functions

    /**
     * @brief Displays the details of the complex number.
     */
    void display();

};

#endif
