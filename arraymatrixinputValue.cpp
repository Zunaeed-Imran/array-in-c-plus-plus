#include <iostream>
using namespace std;

int main() {
  int n, p;
  cout << "Enter Number: ";
  cin >> n;
  cout << "Enter Number: ";
  cin >> p;
  int array[n][p];
  for (int i = 0; i < n; i++){
    for (int j =0; j < p; j++){
      cout << "Enter inner value: " << i << "and" << j <<endl;
      cin >> array[i][j];
    }
  }
  for (int i = 0;  i < n; i++){
    for (int j = 0; j < p; j++) {
      cout << array[i][j]<< "  ";
    }
  }
  return 0;
}