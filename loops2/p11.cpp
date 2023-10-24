//Character Pattern: Write a program to print the following pattern using nested loops
#include <iostream>
using namespace std;

int main () {
    char c = 'A';
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        for (int y = 1; y <= i; y++) {
            cout << c;
            
        } c++; 
        cout << endl;
    }
}