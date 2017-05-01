#include<iostream>

using namespace std;
	
int main(){

  cout << "Starting program..." << flush;
  // flush tells OS to output text without carriage return
  
  cout << "test text" << endl;
  // endl creates a new line and flushes the buffer
  
  cout << "this is some more text" << endl;
  // endl creates a new line and flushes the buffer
  // output multiple lines of text with one cout

  cout << "Banana." << " " << "Apples " << "Oranges" << endl;
	   
  return 0;
}
// statements end with semicolons, c++ executes statements in order
// failure to use endl or flush means text is not guarenteed to come out... depending on size of program. flush and endl forces text output

// indentation is important in C++ 
