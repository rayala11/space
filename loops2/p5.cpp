//Chessboard Pattern: Create a program to print a chessboard pattern of 'n' rows and 'm' columns, with alternating 'X' and 'O' characters. The user inputs 'n' and 'm'.
#include <iostream>
using namespace std;

int main() {
    int nrows;
    int mcolumn;
    int counter = 0;
    int i =0;
    cin >> nrows >> mcolumn;
    while (i < nrows) {
        if (i%2 == 0) {
            cout << "X";
        } else {
            cout << "X";
        }
        counter = 0;
       
        while (counter < mcolumn) {
           cout << "X";
            cout << "O";

            counter++;
        } cout << endl;
        cout << "X";
        cout << "o";
        i++;
    }

}