
#include <iostream>
using namespace std;

int main() {

  cout << "Hello" << endl;

  int numberCats = 5;
  int numberDogs = 7;
  int dogsMinusCats = numberDogs - numberCats;

  cout << "Num of cats: " << numberCats << endl;
  cout << "Num of dogs: " << numberDogs << endl;
  cout << "Total number of animals: " << numberCats + numberDogs << endl;

  cout << "New dog!" << endl;

  numberDogs = numberDogs + 1;

  cout << "Dogs minus cats: " << dogsMinusCats << endl;

  cout << "New number of Dogs: " << numberDogs << endl;
						  
						  
						  
  return 0;
  
}
