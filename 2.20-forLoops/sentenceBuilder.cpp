#include <iostream>
using namespace std;

int main() {

  string sentence = "";
  
  for (int i = 0; i < 10; i++){
    string word;
    cout << "Enter word number " << i + 1 << ": " << flush;
    cin >> word;
    if(sentence == ""){
      sentence = sentence + word;
    }
    else if (i == 9){
      sentence = sentence + " " + word + ".";
    }
    else {
      sentence = sentence + " " + word;
    }
  }
  cout << sentence << endl;
  return 0;
}
