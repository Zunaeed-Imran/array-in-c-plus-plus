#include <iostream>
using namespace std;

int main () {
int sum = 0;
int array[3] = {10, 20, 30};
  for (int i = 0; i < 3; i++) {
    sum += array[i];
  }
  cout << "Sum is: " << sum << endl;
  return 0;
}