#include <iostream>
//#include <iomanip>

using namespace std;

int main() {

  bool bValue = true;
  cout << bValue << endl;
  // 0 is equivalent to false and 1 to true, so 1 is output

  char cValue = 'g';
  cout << cValue << endl;
  // 7 character is printed instead of 55 number because of ascii binding, putting a single number in single quotes forces it to be a char
  // takes one byte of memory

  cout << (int)cValue << endl;
  // casting the integer looks up ascii binding

  cout << "Size of char: " << sizeof(char) << endl;
  // only one byte of storage... only small numbers

  wchar_t wValue = 'i';
  cout << wValue << endl;

  // can store more characters in wchar_t than char-- size 4 instead of 1
  return 0;
}
