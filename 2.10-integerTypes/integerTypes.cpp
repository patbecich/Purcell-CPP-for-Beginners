#include <iostream>
#include <limits>
// this allows us to find max Int
using namespace std;

int main() {

  int value = 999999999;
  // int value = 9999999999999999999999; this number is too large and cannot be represented by this memory
  // how big of an integer can be placed in this limited memory slot
  
  cout << value << endl;
  cout << "Max int value: " << INT_MAX << endl;
  cout << "Min int value: " << INT_MIN << endl;

  long int lValue = 12321312312213123;
  cout << lValue << endl;
  // long int for bigger int values
  // short int for even shorter values to save memory

  cout << "Size of int: " << sizeof(int) << endl;
  cout << "Size of short int: " << sizeof(short int) << endl;
  
  // used 4 bytes for an int
  // 4 * 8 bits = 32 bits
  // 2^32 max value approximately

  // size of short int 2 bytes

  unsigned int uValue = 2343434;
  cout << "Unsigned Int: " << uValue << endl;
  // unsigned int can only be positive(can be a bigger number)
  
  return 0;
}
