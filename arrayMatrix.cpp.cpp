#include <iostream>
using namespace std;

int main () {
  int arr[3][4];
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
      cout <<"Enter Element: "<<i<<" and "<<j<<endl;
      cin >>arr[i][j];
    }
  }
  cout << "Matrix is: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
  } 
  return 0;
}