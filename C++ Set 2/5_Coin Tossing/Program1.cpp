/*
   Description: Simulates a coin tossing.
*/

#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned int flip(); // function prototype

int main() {

   unsigned int headsCount{0}; // total Heads count
   unsigned int tailsCount{0}; // total Tails count
   
   srand( time( 0 ) ); // seed random number generator
   
   // simulate coin toss 100 times
   for ( unsigned int loop{1}; loop <= 100; ++loop )  {
   
      if ( flip() == 0 ) { // simulate coin toss, 0 refers to tails
      
         ++tailsCount; // update Tails count
         cout << "Tails "; // display result 
      } // end if
      else { // 1 refers to heads
      
         ++headsCount; // update Heads count
         cout << "Heads "; // display result
      } // end else

      if ( loop % 10 == 0 ) // 10 tosses per line
         cout << endl;
   } // end for

   // display totals
   cout << "\nThe total number of Heads was " << headsCount 
      << "\nThe total number of Tails was " << tailsCount << endl;
} // end main


// flip uses random number to simulate coin toss
unsigned int flip() {

   return rand() % 2; // scale by 2 for binary result
} // end function flip


