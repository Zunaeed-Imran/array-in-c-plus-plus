#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int array[9][9], i, j;
    for (i = 0; i < 9; ++i){
        for (j = 0; j < 9; ++j)
        {
            array[i][j] = (i) * (j);
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}