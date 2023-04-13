#include <iostream>

using namespace std;

int main () {
  int a [3] [3] = {{5, 4, 1}, {2, 7, 9}, {1, 3, 8}};
  for (int k = 0; k < 3; k++) {
    for (int j = 0; j < 3; j++) {
      cout << a [k] [j] << " ";
    }
    cout << endl;
  }
  return 0;
}
