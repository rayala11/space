#include <iostream>
using namespace std;

int main() {
    /* cout << "Display a multiplacation set " << endl;
    for (int i = 1,j = 5; i < 5; i++, j++) {
        cout << i << " * " << j << " : " << i*j << endl; */

    for (int i= 0; i < 100; i++) {
        cout << i;
        if (i%10 == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}