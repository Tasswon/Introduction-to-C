/*
   Description: Reads in a size of a side, and prints out a hollow square of asterisks 
*/

#include <iostream>
using namespace std;

int main()
{
   unsigned int stars{0}; // number of stars on a side
   unsigned int column{0}; // the current column of the square being printed
   unsigned int row{1}; // the current row of the square being printed

   // prompt and read the length of the side from the user
   cout << "Enter length of side:";
   cin >> stars;

   // valid input, if invalid, set to default
   if ( stars < 1 )
   {
      stars = 1;
      cout << "Invalid Input\nUsing default value 1\n";
   } // end if
   else if ( stars > 20 )
   {
      stars = 20;
      cout << "Invalid Input\nUsing default value 20\n";
   } // end else if

   // repeat for as many rows as the user entered
   while ( row <= stars )
   {
      column = 1;

      // and for as many columns as rows
      while ( column <= stars )
      {
         if ( row == 1 )
            cout << "*";
         else if ( row == stars )
            cout << "*";
         else if ( column == 1 )
            cout << "*";
         else if ( column == stars )
            cout << "*";
         else
            cout << " ";

         ++column; // increment column
      } // end inner while

      cout << endl;
      ++row; // increment row
   } // end outer while
} // end main

