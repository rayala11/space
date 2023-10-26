//Palindrome Pyramid: Implement a C++ program that prints a pattern of palindrome numbers. For 'n = 5', the pattern would look like this:
#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number " << endl;
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        for (int y = 1; y <= i; y++ ) {
            cout << y;
        } for (int x = i - 1; x >= 1; x--) {
            cout << x;
        } 
        cout << endl;
    } 
}