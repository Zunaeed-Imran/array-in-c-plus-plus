#include <iostream>
using namespace std;

int main () {
  int array[2][3][4] = {
    {{1, 23, 36, 69}, {8, 96, 55, 1}, {88, 1, 2, 32}},
    {{25, 6, 9, 3}, { 54, 88, 54, 654}, {12, 3, 9, 1}}
  };
  cout << array[1][0][0];
  return 0;
}