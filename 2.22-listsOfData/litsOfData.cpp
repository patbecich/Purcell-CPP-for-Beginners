
#include <iostream>
using namespace std;



// arrays are a list of values (elements) contained in one variable

int main() {

  int values[3];
  // elements 0, 1, and 2

  values[0] = 88;
  //values[1] = 123;
  values[2] = 7;

  // if we call an element that does not exist we get a garbage value (whatever happened to be in memory)
  
  cout << values[0] << endl;
  cout << values[1] << endl;
  cout << values[2] << endl;

  // initializing and declaring
  double numbers[4] = {4.5, 2.3, 7.2, 8.1};

  cout << "Array of doubles:" << endl;
  cout << numbers[0] << endl;
  cout << numbers[1] << endl;
  cout << numbers[2] << endl;

  // iterating through array

  for(int i=0; i<4; i++) {
    cout << "for loop indexing: " << i << ": " << numbers[i] << endl;
  }

  // initializing an array with zeros
  // arrays can have thousands of values
  
  int numberArray[8] = {};

  for(int i=0; i<8; i++) {
    cout << "for loop indexing: " << i << ": " << numberArray[i] << endl;
  }
  // arrays can have any type in them

  string texts[] = {"apple","oranges"};
  // if initialized manually, no need to size array in bracket

  for(int i=0; i<2; i++) {
    cout << "for loop indexing: " << i << ": " << texts[i] << endl;
  }

  // C++ will not stop you from accessing elements that don't exist, there is no good reason to read or write to elements that don't exist
  // this will not necessarily crash the program
  
  return 0;
}
