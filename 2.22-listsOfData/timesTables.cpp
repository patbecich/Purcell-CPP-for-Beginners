
#include <iostream>
using namespace std;



int main() {

 //  int values[12] = {};

//   for (int i = 0; i < 12; i++) {
//     values[i] = i + 1;
//   }

//   for (int a = 0; a < 12 ; a++) {
//     for (int b = 0; b < 12 ; b++) {
//       if(b == 11) {
// 	cout << (a+1) * values[b] << " " << endl;
//       }
//       else{
// 	cout << (a+1) * values[b] << " " << flush;

	
//       }
      
//     }

//   }
  
  
//   return 0;
// }

  int values[10][10] = {};

  for (int i=0;i<10;i++) {
    for (int j=0;j<10;j++){
      values[i][j] = (i+1) * (j+1);
    }
  }

  for (int i=0;i<10;i++) {
    for (int j=0;j<10;j++){
      cout << values[i][j] << " " << flush;
    }
    cout << endl;
  }
}
