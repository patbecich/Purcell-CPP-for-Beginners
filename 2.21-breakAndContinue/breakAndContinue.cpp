
#include <iostream>
using namespace std;

int main(){

  // for(int i = 0; i < 5; i++){

  //   cout << "i is " << i << endl;

  //   //break immediately breaks the loop
  //   if(i==3) {
  //     break;
  //   }
  //   cout << "looping" << endl;
  // }

  // cout << "program quitting" << endl;
  // return 0;

  // for(int i = 0; i < 5; i++){

  //   cout << "i is " << i << endl;

  //   //continue causes the current iteration of the loop to be broken and ignored, but looping will still continue
  //   if(i==3) {
  //     continue;
  //   }
  //   cout << "looping" << endl;
  // }

  // cout << "program quitting" << endl;

  const string password = "hello";
      
  string input;

  do{
    cout << "Enter your password: " << flush;

    cin >> input;

    if(input == password) {
      break;
    }
    else{
      cout << "Access denied" << endl;
    }

  } while (true);
  // simplify by creating an infinite loop that is broken by break
  cout << "Password accepted" << endl;

  return 0;
}


  
