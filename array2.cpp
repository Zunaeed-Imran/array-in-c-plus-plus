#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int n;
  cout << "Enter n: ";
  cin >> n;
  int array [n];
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i << ": ";
    cin >> array [i];
  }
  for (int i = 0; i < n; i++) {
    sum += array [i];
  }
  cout << "sum is : " << sum;
  return 0;
}
