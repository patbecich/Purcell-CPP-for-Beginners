#include <iostream>
using namespace std;

int main() {

  const string password = "Patrick";
  string passIn;
  int attempts = 0;
  int maxAttempts = 5;
  
  
  do {

    cout << "Enter your password: " << flush;
    cin >> passIn;
    attempts++;
    int remainingAttempts = maxAttempts - attempts;
    
    if(remainingAttempts != 0 && passIn != password) {
      cout << "Wrong password, you have " << remainingAttempts << " attempts left." << endl;
	}
      
  } while (attempts < maxAttempts && passIn != password);

  if(attempts >= maxAttempts) {
    cout << "Too many attempts. You have been locked out" << endl;
  }else{
    cout << "Access granted" << endl;
  }

  return 0;
}
