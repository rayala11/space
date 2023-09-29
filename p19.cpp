//Write a C++ program that uses a `while` loop to print even numbers from 2 to 20 (inclusive).
#include <iostream>
using namespace std;

int main() {
    int a=2;

    while (a<=20) {
        if (a%2==0) {
            cout << a << endl;
        }
        a++;
    }
}