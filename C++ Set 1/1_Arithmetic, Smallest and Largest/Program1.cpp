/*
   Description: Takes three integers as input and print the sum, average, product, smallest, and largest
*/

#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   int number1{0}; // first integer read from user
   int number2{0}; // second integer read from user
   int number3{0}; // third integer read from user
   int smallest{0}; // smallest integer read from user
   int largest{0}; // largest integer read from user

   cout << "Input three different integers: "; // prompt
   cin >> number1 >> number2 >> number3; // read three integers

   largest = number1; // assume first integer is largest

   if ( number2 > largest ) // is number2 larger?
      largest = number2; // number2 is now the largest

   if ( number3 > largest ) // is number3 larger?
      largest = number3; // number3 is now the largest

   smallest = number1; // assume first integer is smallest

   if ( number2 < smallest ) // is number2 smaller?
      smallest = number2; // number2 is now the smallest

   if ( number3 < smallest ) // is number3 smaller?
      smallest = number3; // number3 is now the smallest

   cout << "Sum is " << number1 + number2 + number3
      << "\nAverage is " << ( number1 + number2 + number3 ) / 3
      << "\nProduct is " << number1 * number2 * number3
      << "\nSmallest is " << smallest
      << "\nLargest is " << largest << endl;
} // end main

