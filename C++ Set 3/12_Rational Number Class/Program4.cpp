/*
     Description: Utlizes the rational number class to perform arithmetic with fractions.
*/

#include <iostream> 
#include "RationalNumber.h"
using namespace std;

int main() {
   RationalNumber c{7, 3}; 
   RationalNumber d{3, 9};

   RationalNumber x = c + d; // test overloaded operators + and =
   cout << c.toString() << " + " << d.toString() << " = " << x.toString() << "\n";

   x = c - d; // test overloaded operators - and =
   cout << c.toString() << " - " << d.toString() << " = " << x.toString() << "\n";

   x = c * d; // test overloaded operators * and =
   cout << c.toString() << " * " << d.toString() << " = " << x.toString() << "\n";

   x = c / d; // test overloaded operators / and =
   cout << c.toString() << " / " << d.toString() << " = " << x.toString() << "\n";

   cout << boolalpha;
   cout << c.toString() << " > " << d.toString() << " is " << (c > d) << "\n";
   cout << c.toString() << " < " << d.toString() << " is " << (c < d) << "\n";
   cout << c.toString() << " >= " << d.toString() << " is " << (c >= d) << "\n";
   cout << c.toString() << " <= " << d.toString() << " is " << (c <= d) << "\n";
   cout << c.toString() << " == " << d.toString() << " is " << (c == d) << "\n";
   cout << c.toString() << " != " << d.toString() << " is " << (c != d) << "\n";
} 


