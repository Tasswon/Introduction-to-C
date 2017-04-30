/*
   Description: Counts the number of occurrences of a specified char in a string.
*/

#include <iostream>

using namespace std;

const int SIZE{80};

int count(char *s, char a);

int main() {

	char string1[SIZE];
	char c;

	cout << "Enter a string : ";
	cin >> string1;
	cout << "Enter a character : ";
	cin >> c;

	cout << c << " occurs in the string " << count(string1, c);    // call function count to count the number of occurrences of a specified character
	cout << " times" << endl;


} // end main

//count the number of occurrences of a specified character
int count(char *str, char a) {

	int number{0};

	while (*str != '\0') {
	
		if (*str == a)
			number++;

		str++;
	}

	return number;
}