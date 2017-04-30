#include <iostream>
#include <iomanip>
using namespace std; 

// Definition of Account class.
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {

 public:
	 Account( double ); // constructor initializes balance
	 void credit( double ); // add an amount to the account balance
	 bool debit( double ); // subtract an amount from the account balance
	 void setBalance( double ); // sets the account balance
	 double getBalance(); // return the account balance
 private:
	 double balance; // data member that stores the balance
}; // end class Account

#endif


// Member-function definitions for class Account.
// Account constructor initializes data member balance
Account::Account( double initialBalance ) {

 // if initialBalance is greater than or equal to 0.0, set this value
 // as the balance of the Account
    if ( initialBalance >= 0.0 )
       balance = initialBalance;
    else // otherwise, output message and set balance to 0.0
    {
	  cout << "Error: Initial balance cannot be negative." << endl;
       balance = 0.0;
    } // end if...else
} // end Account constructor

// credit (add) an amount to the account balance
void Account::credit( double amount ) {

     balance = balance + amount; // add amount to balance
} // end function credit

// debit (subtract) an amount from the account balance
// return bool indicating whether money was debited
bool Account::debit( double amount ) {

   if ( amount > balance ) { // debit amount exceeds balance
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   } // end if
   else // debit amount does not exceed balance
   {
      balance = balance - amount;
      return true;
   } // end else
} // end function debit

// set the account balance
void Account::setBalance( double newBalance ) {

   balance = newBalance;
} // end function setBalance

// return the account balance
double Account::getBalance() {

   return balance;
} // end function getBalance


// Definition of SavingsAccount class.
#ifndef SAVINGS_H
#define SAVINGS_H

class SavingsAccount : public Account {

   public:
     // constructor initializes balance and interest rate
     SavingsAccount( double, double );
     double calculateInterest(); // determine interest owed
   private:
     double interestRate; // interest rate (percentage) earned by account
}; // end class SavingsAccount

#endif


// Member-function definitions for class SavingsAccount.
// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate )
    : Account( initialBalance ) { // initialize base class

    interestRate = ( rate < 0.0 ) ? 0.0 : rate; // set interestRate
} // end SavingsAccount constructor

 // return the amount of interest earned
double SavingsAccount::calculateInterest() {

    return getBalance() * interestRate;
} // end function calculateInterest


// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

class CheckingAccount : public Account {
   public:
   // constructor initializes balance and transaction fee
     CheckingAccount( double, double );
     void credit( double ); // redefined credit function
     bool debit( double ); // redefined debit function
   private:
     double transactionFee; // fee charged per transaction

     // utility function to charge fee
     void chargeFee();
}; // end class CheckingAccount

#endif

// Member-function definitions for class CheckingAccount.
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee )
   : Account( initialBalance ) { // initialize base class

    transactionFee = ( fee < 0.0 ) ? 0.0 : fee; // set transaction fee
} // end CheckingAccount constructor

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount ) {

    Account::credit( amount ); // always succeeds
    chargeFee();
} // end function credit

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount ) {

    bool success = Account::debit( amount ); // attempt to debit

    if ( success ) { // if money was debited, charge fee and return true
       chargeFee();
       return true;
    } // end if
    else // otherwise, do not charge fee and return false
       return false;
} // end function debit

// subtract transaction fee
void CheckingAccount::chargeFee() {

    Account::setBalance( getBalance() - transactionFee );
    cout << "$" << transactionFee << " transaction fee charged." << endl;
} // end function chargeFee



/*
     Description: Simulates an inheritance hierarchy that bank might use to represent accounts.
*/
int main() {

    Account account1{50.0}; // create Account object
    SavingsAccount account2{25.0, .03}; // create SavingsAccount object
    CheckingAccount account3{80.0, 1.0}; // create CheckingAccount object

    cout << fixed << setprecision( 2 );

    // display initial balance of each object
    cout << "account1 balance: $" << account1.getBalance() << endl;
    cout << "account2 balance: $" << account2.getBalance() << endl;
    cout << "account3 balance: $" << account3.getBalance() << endl;

    cout << "\nAttempting to debit $25.00 from account1." << endl;
    account1.debit( 25.0 ); // try to debit $25.00 from account1
    cout << "\nAttempting to debit $30.00 from account2." << endl;
    account2.debit( 30.0 ); // try to debit $30.00 from account2
    cout << "\nAttempting to debit $40.00 from account3." << endl;
    account3.debit( 40.0 ); // try to debit $40.00 from account3

    // display balances
    cout << "\naccount1 balance: $" << account1.getBalance() << endl;
    cout << "account2 balance: $" << account2.getBalance() << endl;
    cout << "account3 balance: $" << account3.getBalance() << endl;

    cout << "\nCrediting $40.00 to account1." << endl;
    account1.credit( 40.0 ); // credit $40.00 to account1
    cout << "\nCrediting $65.00 to account2." << endl;
    account2.credit( 65.0 ); // credit $65.00 to account2
    cout << "\nCrediting $20.00 to account3." << endl;
    account3.credit( 20.0 ); // credit $20.00 to account3

    // display balances
    cout << "\naccount1 balance: $" << account1.getBalance() << endl;
    cout << "account2 balance: $" << account2.getBalance() << endl;
    cout << "account3 balance: $" << account3.getBalance() << endl;

    // add interest to SavingsAccount object account2
    double interestEarned = account2.calculateInterest(); 
    cout << "\nAdding $" << interestEarned << " interest to account2."
         << endl;
    account2.credit( interestEarned );

    cout << "\nNew account2 balance: $" << account2.getBalance() << endl;
    
} // end main