#include <iostream>
//#include <iomanip>

using namespace std;

int main() {

  cout << "1.\tAdd new record." << endl;
  cout << "2.\tDelete record." << endl;
  cout << "3.\tView record." << endl;
  cout << "4.\tSearch record." << endl;
  cout << "5.\tQuit" << endl;
  
  cout << "Enter your selection: " << flush;

  int value;
  cin >> value;

  // if(value == 5) {
  //   cout << "Quiting" << endl;
  // }

  // what if i want different actions if true or false
  // ie restricted actions under 3

  if (value < 3) {
    cout << "Insufficient privileges" << endl;
  }else{
    cout << "Access granted" << endl;
  }
  // with if/else, one condition will always execute

  if (value == 5) {
    cout << "Quitting" << endl;
  }else{
    cout << "Not quitting" << endl;
  }
  return 0;
}
