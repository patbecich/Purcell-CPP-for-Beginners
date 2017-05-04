#include <iostream>
using namespace std;



int main(){

  char task;
  cout << "What would you like to do?" << endl;
  cin >> task;

  switch(task) {
  case 'm':
    int choice;
    cout << "Your menu options are 1 through 3, please enter your choice: " << flush;
    cin >> choice; 
    switch(choice) {
    case 1:
      cout << "You have chosen 1 potato" << endl;
      break;
    case 2:
      cout << "You have chosen 2 potatoes" << endl;
      break;    
    case 3:
      cout << "You have chosen 3 potatoes" << endl;
      break;      
    default:
      cout << "Unrecognized value." << endl;
    }
    break;
  default:
    cout << "No menu for you" << endl;
  }
  
  
  return 0;
}
