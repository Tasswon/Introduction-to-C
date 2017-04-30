/*
     Description: Utlizes the SavingsAccount class to similuate an actual account with
     accrued interest.
*/

#include <iostream> 
#include <iomanip> 
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

int main() {
   SavingsAccount saver1{2000.0};
   SavingsAccount saver2{3000.0};

   SavingsAccount::modifyInterestRate(.03); // change interest rate

   cout << "Initial balances:\nSaver 1: ";
   saver1.printBalance();
   cout << "\tSaver 2: ";
   saver2.printBalance();

   saver1.calculateMonthlyInterest();
   saver2.calculateMonthlyInterest();

   cout << "\n\nBalances after 1 month's interest applied at .03:\n"
      << "Saver 1: ";
   saver1.printBalance();
   cout << "\tSaver 2: ";
   saver2.printBalance();

   SavingsAccount::modifyInterestRate(.04); // change interest rate
   saver1.calculateMonthlyInterest();
   saver2.calculateMonthlyInterest();
   
   cout << "\n\nBalances after 1 month's interest applied at .04:\n"
      << "Saver 1: ";
   saver1.printBalance();
   cout << "\tSaver 2: ";
   saver2.printBalance();
   cout << endl;
} 


