/*
     Description: Member-function definitions for the rational class.
*/

#include <iostream> 
#include <sstream> // for ostringstream class
#include "Rational.h" // include definition of class Rational
using namespace std;

Rational::Rational(int n, int d) : numerator(n), denominator(d) {
   reduce(); // store the fraction in reduced form
} 

Rational Rational::add(const Rational& a) const {
   Rational t(a.numerator * denominator + a.denominator * numerator, 
      a.denominator * denominator); 
   t.reduce(); // store the fraction in reduced form
   return t;
} 

Rational Rational::subtract(const Rational& s) const {
   Rational t(s.denominator * numerator - denominator * s.numerator,
      s.denominator * denominator); 
   t.reduce(); // store the fraction in reduced form
   return t;
} 

Rational Rational::multiply(const Rational& m) const {
   Rational t(m.numerator * numerator, m.denominator * denominator);  
   t.reduce(); // store the fraction in reduced form
   return t;
} 

Rational Rational::divide(const Rational& v) const {
   Rational t(v.denominator * numerator, denominator * v.numerator); 
   t.reduce(); // store the fraction in reduced form
   return t;
} 

string Rational::toRationalString() const {
   if (denominator == 0) { // validates denominator
      return "\nDIVIDE BY ZERO ERROR!!!";
   }
   else if (numerator == 0) { // validates numerator
      return "0";
   }
   else {
      ostringstream output;
      output << numerator << '/' << denominator;
      return output.str();
   }
} 

double Rational::toDouble() const {  
   return static_cast<double>(numerator) / denominator; 
} 

void Rational::reduce() {
   int largest{numerator > denominator ? numerator : denominator};

   int gcd{0}; // greatest common divisor

   for (int loop{2}; loop <= largest; ++loop) {
       if (numerator % loop == 0 && denominator % loop == 0) {
          gcd = loop;
       }
   }

   if (gcd != 0) {
      numerator /= gcd;
      denominator /= gcd;
   } 
} 


