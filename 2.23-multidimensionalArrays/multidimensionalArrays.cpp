
#include <iostream>
using namespace std;

int main() {

  string animals[2][3] = {
    {"fox", "dog", "cat"},
    {"mouse", "squirrel", "parrot"}
    // we can leave the first [] blank, but not the second
    // can't have different numbers of elements
    // 2d arrays are the most common multidimensional array
  };

  for(int i=0; i<2; i++) {
    for(int j=0; j<3; j++) {
      cout << animals[i][j] << " " << flush;
    }
    cout << endl;
  }
    
  return 0;
}


// use sizeof to predict iteration limit in for loops

// for(int i=0; i<sizeof(values)/sizeof(int); i++)

// size of an array is proportional to number of things it contains of a type
