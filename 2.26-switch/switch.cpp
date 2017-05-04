#include <iostream>
using namespace std;


//switch statement lets you choose between different values

int main(){

  int value = 5;

  //only certain types of values can be used here ... int/char
  //use break or you will end up executing other case statements
  //you are not allowed to use a variable in your case statement, but you can use constant values
  
  switch(value) {
  case 4:
    cout << "Value is 4." << endl;
    break;
  case 5:
    cout << "Value is 5." << endl;
    break;    
  case 6:
    cout << "Value is 6." << endl;
    break;      
  default:
    cout << "Unrecognized value." << endl;
  }
  
  
  return 0;
}
