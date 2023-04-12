#include <iostream>
#include <climits>
using namespace std;

int main () {
  int array[7] = {54, 5654, 821, 1, 232, 221, 2};
  int maxiNo = INT_MIN;
  int minuNo = INT_MAX;
  for (int g = 0; g < 7; g++) {
    if (array[g] > maxiNo){
      maxiNo = array[g];
    }
    if (array[g] < minuNo) {
      minuNo = array[g];
    }
  }
    cout << minuNo << " " << maxiNo;
  return 0;
}