#include <iostream>
//#include <iomanip>

using namespace std;

int main() {

  string password = "hello";

  cout << "Enter password: " << flush;

  string input;
  cin >> input;

  //cout << "'" << input << "'" << endl;

  if(input == password || input == "1") {
    cout << "Password accepted." << endl;
  }

  if(input != password && input != "1") {
    cout << "Access denied." << endl;
  }
  

      
  
  return 0;
}
