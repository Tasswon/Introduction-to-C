/*
     Description: Member function definitions for class SavingsAccount
*/

#include <iostream> 
#include <iomanip>
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

double SavingsAccount::annualInterestRate = 0.0; // the interest rate of all accounts

// calculate monthly interest for this savings account
void SavingsAccount::calculateMonthlyInterest() { 
   savingsBalance += savingsBalance * (annualInterestRate / 12.0); 
} 

// function for modifying static member variable annualInterestRate
void SavingsAccount::modifyInterestRate(double i) { 
   annualInterestRate = (i >= 0.0 && i <= 1.0) ? i : 0.03; 
} 

// prints balance of the savings account
void SavingsAccount::printBalance() const {
   cout << fixed << '$' << setprecision(2) << savingsBalance;
} 


