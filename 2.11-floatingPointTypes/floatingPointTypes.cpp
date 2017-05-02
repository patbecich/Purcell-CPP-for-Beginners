#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int value = 9;
  cout << value << endl;

  // what if we want a decimal point- use float

  float fValue = 123.456789;
  cout << fixed << fValue << endl;
  //fixed avoids scientific notation
  float f2Value = 123.456789;
  cout << scientific << f2Value << endl;
  //scientific forces scientific notation
  //sizeof shows memory used
  cout << sizeof(float) << endl;

  // memory allocated to float limits precision, have to use a different type for more precision
  // alter precision  with setprecision() - must include <iomanip>

  cout << setprecision(20) << fixed << fValue << endl;

  // double is more precise
  double dValue = 123.456789;
  cout << setprecision(20) << fixed << dValue << endl;

  // double gets more digits correct than float

  // long double is even more precise
  long double lValue = 123.456789876543210;
  cout << setprecision(20) << fixed << lValue << endl;
  cout << "Size of long double: " << sizeof(lValue) << endl;
  // no signed or unsigned doubles2
  
  return 0;
}
