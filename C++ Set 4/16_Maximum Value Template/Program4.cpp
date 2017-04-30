/*
     Description: Determines the maximum values from a vairety of types (template)
*/

#include <iostream>
#include <string>
using namespace std;

template < typename T >
T maxValue(const T array[], const int size) {

  T maxValue = array[0];

  for (int i{1}; i < size; i++) {
    if (maxValue < array[i])
      maxValue = array[i];
  }

  return maxValue;

}


int main() {

  int intArray[] = { 1, 2, 4, 2, 5, 3, 1};
  cout << "Maximum int value is " << maxValue(intArray, 7) << endl;

  double doubleArray[] = { 1.4, 2, 0.4, 2, 0.5, 3, 1};
  cout << "Maximum double value is " << maxValue(doubleArray, 7) << endl;

  string strings[] = {"abc", "cbs", "nbc"};
  cout << "Maximum string is " << maxValue(strings, 3) << endl;


}
