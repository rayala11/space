//Write a program that takes a user's age as input and prints out whether they are a child (0-12), a teenager (13-19), an adult (20-64), or a senior (65 and older).
#include <iostream>
using namespace std;

int main() {
    cout << "Input users age " << endl;
    int x;
    cin >> x;

    if (x>0&&x<=12) {
        cout << "YOu are a child " << endl;
    } else if (x>=13&&x<=19) {
        cout << "You are a teenager " << endl;
    } else if (x>=20&&x<=64) {
        cout << "You are an adult" << endl;
    } else if (x>=65) {
        cout << "You are a senior " << endl;
    } else {
        cout << " Not a valid entry " << endl;
    }
}