#include <iostream>
using namespace std;

int main() {

  string text = "Hello";
  // declare an empty string for input
  string input;
  
  cout << text << endl;
  // cout is an object
  // << is called the insertion operator
  // cin is the opposite
  cout << "Enter name: " << flush;
  cin >> input;
  // >> this the extration operator
  cout << "You entered: " << input << endl;

  cout << "Enter a number: " << flush;
  int value;
  cin >> value;
  cout << "You entered: " << value << endl;  
  // this does not guard against types inserted into variables... 

  string lastName;
  cout << "Enter your last name: " << flush;
  cin >> lastName;

  cout << "Your full name and number is: " << input << " " << lastName << ", Number: " << value << endl;
  
  return 0;
  
}
