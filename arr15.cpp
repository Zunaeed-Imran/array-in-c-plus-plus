#include <iostream>
using namespace std;

int main()
{
    int A[5] = { 1, 2, 3};
    int K = 0;

    K = A[0] + A[2] + A[4] * 10;

    cout << K;

    return 0;
}