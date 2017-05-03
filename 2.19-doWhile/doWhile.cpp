
#include <iostream>
using namespace std;

int main() {

  //int value = 7;

  // do {
  //   cout << "Hello" << endl;
  // } while(value < 5);
  // // do while loop always executes at least once because condition is not checked until end

  const string password = "hello";
  // const keeps value constant
  // consts are often delcared near top of file or subroutine

  
  string input;
  // cin >> input;

  // else{
  //   cout << "Access denied" << endl;
  // }
  do{
    cout << "Enter your password: " << flush;

    cin >> input;

    if(input != password) {
      cout << "Access denied" << endl;
    }
    // we can reuse the same variable if we want to because of scope

  } while (input != password);
  
  cout << "Password accepted" << endl;

  return 0;
}

// avoid repeated code with a do while, using a do while allows the user to be prompted for a password once before the condition is checked
