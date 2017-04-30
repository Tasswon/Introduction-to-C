/*
     Description: Header file for the complex class.
*/

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
   friend std::ostream &operator<<(std::ostream&, const Complex&);
   friend std::istream &operator>>(std::istream&, Complex&);
public:
   explicit Complex(double = 0.0, double = 0.0); // constructor
   Complex operator+(const Complex&) const; // addition
   Complex operator-(const Complex&) const; // subtraction
   Complex operator*(const Complex&) const; // multiplication
   Complex& operator=(const Complex&); // assignment
   bool operator==(const Complex&) const;
   bool operator!=(const Complex&) const;
private:
   double real; // real part
   double imaginary; // imaginary part
}; 

#endif

