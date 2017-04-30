/*
     Description: Prints a table of ASCII characters (set 33 to 126)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   // display column headings and set field lengths
   cout << setw( 7 ) << "Decimal" << setw( 9 ) << "Octal " << setw( 15 )
        << "Hexadecimal " << setw( 13 ) << "Character"
        << showbase << '\n';

   // loop through ASCII values 33-126 and display corresponding
   // integer, octal and hexadecimal values
   for ( int loop{33}; loop <= 126; ++loop )
       cout << setw( 7 ) << dec << loop << setw( 9 ) << oct << loop
            << setw( 15 ) << hex << loop << setw(13)
            << static_cast<char>( loop ) << endl;

} // end main

