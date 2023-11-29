//Write a C++ program that defines a function called printNumbers which takes an integer parameter n and prints all the numbers
// from 1 to n. In the main() function, ask the user for a number and call the printNumbers function to display the sequence.
#include <iostream>
using namespace std;

int printNumbers(int num) {
    int i=1;
    while(i<num) {
        cout << i << " ";
        i++;
    }
    return i;
}

int main() {
    int i=1;
    int n;
    cin >> n;
    cout << printNumbers(n);
}