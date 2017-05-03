#include <iostream>
//#include <iomanip>

using namespace std;

// we already know ==, !=, <, >, <=, >=

int main() {


  int value1 = 7;
  int value2 = 4;

  if(value1 < 8){
    cout << "Condition 1: true" << endl;
  }
  else {
    cout << "Condtion 1: false" << endl;
  }

  if(value1 < 8 && value2 == 4){
    cout << "Condition 2: true" << endl;
  }
  else {
    cout << "Condtion 2: false" << endl;
  }
  // cpp reads complex conditions from left to right, evaluates as needed
  // && and, || for or condition

  if(value2 != 8){
    cout << "Condtion 4: true" << endl;
  }else{
    cout << "Condtion 4: false" << endl;
  }
  // use equality checks when possible, this inequality check could be replaced with opposite case

  if((value2 != 8 && value1 == 10) || value1 < 10){
    cout << "Condtion 5: true" << endl;
  }else{
    cout << "Condtion 5: false" << endl;
  }
  // use parentheses to avoid ambiguity
  // store conditions in boolean variables

  bool condition1 = (value2 != 8 && value1 == 10);
  cout << condition1 << endl;

  bool condition2 = value1 < 10;
  cout << condition2 << endl;

  if(condition1 || condition2) {
    cout << "Condtion 6: true" << endl;
  }else{
    cout << "Condtion 6: false" << endl;
  }
  // this is a clearer method
  
  return 0;
}
