/*
   Description: Determines the distinct numbers in an int array.
*/

#include <iostream>
#include <array>
using namespace std;

int main() {

	const int SIZE{10}; // size of array
	int a[SIZE]{};
	int subscript{0};
	bool duplicate{false};

	cout << "Enter 10 numbers: ";

	// get 10 nonduplicate integers
	for (unsigned int i{0}; i < SIZE; i++) {
	
		duplicate = false;
		int value = 0; // number entered by user
		cin >> value;

		// validate input and test if there is a duplicate

		for (int j{0}; j < subscript; ++j) {
		
			if (value == a[j]){

				duplicate = true;
				break;
			} // end if
		} // end for

		// if number is not a duplicate, enter it in array
		if (!duplicate)
			a[subscript++] = value;

	} // end for

	cout << "\nThe distinct numbers are: ";

	// display array of nonduplicates
	for (int index{0}; index < subscript; ++index)
		cout << a[index] << ' ';

	cout << endl;
} // end main


