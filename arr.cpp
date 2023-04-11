#include <iostream>
using namespace std;

int main () {
  int i, j, temp, array[4] = {545,646,65,6};
    for (int i = 0; i < 4; i ++) {
      for (int j = 0; j < 4; j++) {
        if (array[i] > array[j]) {
          temp = array[i];
          array[i] = array [j];
          array[j] = temp;
        }
      }
    }
    cout << "Sorted Element: ";
    for (int i = 0; i <4; i++){
      cout <<array[i] << "  ";
    }

  return 0;
}