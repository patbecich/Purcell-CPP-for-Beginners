#include <iostream>
using namespace std;


int main(){

  string value = "Hello this is a string";
  // value is an object and string is a class, whereas int is a primative type

  string text1 = "Hello: ";
  string text2 = "Fred";

  string text3 = text1 + text2;
  // example of concatenation
  
  cout << text1 << text2 << endl;

  cout << text3 << endl;
  
  cout << value << endl;
  
return 0;
}

// strings are not completely standard across compilers, added on extra to C++
