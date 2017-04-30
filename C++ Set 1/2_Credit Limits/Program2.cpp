/*
   Description: Determines whether a department-store customer has exceed the credit limit on a charge account
*/

#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std;

int main()
{
   unsigned int account{0}; // account number
   double balance{0}; // account balance
   double charges{0}; // total charges
   double credits{0}; // total credits
   double creditLimit{0}; // allowed credit limit

   cout << "Enter account number (or -1 to quit): ";
   cin >> account; // read in account number

   // set floating-point number format
   cout << fixed << setprecision( 2 );

   // exit if the input is -1; otherwise proceed with the program
   while ( account != -1 )
   {
      cout << "Enter beginning balance: ";
      cin >> balance; // read in original balance

      cout << "Enter total charges: ";
      cin >> charges; // read in charges

      cout << "Enter total credits: ";
      cin >> credits; // read in credits

      cout << "Enter credit limit: ";
      cin >> creditLimit; // read in credit limit

      // calculate and display new balance
      balance = balance + charges - credits;
      cout << "New balance is " << balance;

      // display a warning if the user has exceed the credit limit
      if ( balance > creditLimit )
         cout << "\nAccount:      " << account
            << "\nCredit limit: " << creditLimit
            << "\nBalance:      " << balance
            << "\nCredit Limit Exceeded.";

      cout << "\n\nEnter account number (or -1 to quit): ";
      cin >> account; // read in next account number
   } // end while
} // end main

