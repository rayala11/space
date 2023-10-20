//Half Pyramid of Numbers: Write a C++ program that prints a half pyramid pattern using numbers as shown below for a number received from the user:
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int j = 1;
    int num;
    cin >> num;

    while (i <= num) {
        j = 1;
        while (j <= i) {
            cout << j;
            j++;
        } cout << endl;
        i++;
    }
}