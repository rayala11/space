//Create a C++ program that uses a `while` loop to display the squares of numbers from 1 to 10.
#include <iostream>
using namespace std;

int main() {
    int n=1,i;

    while (n<=10) {
        i= n*n;
        cout << i << endl;
        n++;
    } 
}