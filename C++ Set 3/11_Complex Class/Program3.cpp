/*
     Description: Utlizes the complex class to perform arithmetic on complex numbers,
     which have a real and imaginary part.
*/

#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
   Complex x; 
   Complex y{4.3, 8.2};
   Complex z{3.3, 1.1};
   Complex k;

   cout << "Enter a complex number in the form: (a, b)\n? ";
   cin >> k; // demonstrating overloaded >>
   cout << "x: " << x << "\ny: " << y << "\nz: " << z << "\nk: "
      << k << '\n'; // demonstrating overloaded <<
   x = y + z; // demonstrating overloaded + and =
   cout << "\nx = y + z:\n" << x << " = " << y << " + " << z << '\n';
   x = y - z; // demonstrating overloaded - and =
   cout << "\nx = y - z:\n" << x << " = " << y << " - " << z << '\n';
   x = y * z; // demonstrating overloaded * and =
   cout << "\nx = y * z:\n" << x << " = " << y << " * " << z << "\n\n";

   if (x != k) { // demonstrating overloaded !=
      cout << x << " != " << k << '\n';
   }

   cout << '\n';
   x = k;

   if (x == k) { // demonstrating overloaded ==
      cout << x << " == " << k << '\n';
   }
} 


