#include <iostream>
using namespace std;

int main() {
    int num, rows;
    cin >> num >> rows;
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= rows; j++) {
                if (j == 1 || j == rows || i == 1 || i == num) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } cout << endl;
        } 
}