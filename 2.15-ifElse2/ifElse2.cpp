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

  if(value == 1) {
    cout << "Adding new record" << endl;
  }
  else if(value == 2) {
    cout << "Deleting record" << endl;
  }
  else if(value == 3) {
    cout << "Viewing record" << endl;
  }
  else if(value == 4) {
    cout << "Searching record" << endl;
  }
  else if(value == 5) {
    cout << "Quitting" << endl;
  }
  else {
    cout << "Invalid option." << endl;
  }
  // only one of these options can execute with this structure
  return 0;
}

// it's bad form to have multiple statements like previous example, want one statement (ifElseIf)

// 2.16 comparing floats
// floating points cant be stored precisely, this can mess up equality checks...
// we can only rely on floats to certain precision, we don't have infinite precision

// if you want to compare floats, check if difference between them is within a range, not if they are exactly the same
