#include <iostream>
using namespace std;

int main() {
    cout << "Which would you like to do: (1)Withdrawal,(2)Check balance,(3)Deposit " << endl;
    int x;
    cin >> x;

    switch (x) {
        case 1: cout << " How much do you wish to Withdrawal? " << endl;
        break;
        case 2: cout << " Which account would you like to check balance? " << endl;
        break;
        case 3: cout << " Check or Case Deposit? " << endl;
        break;
        default: cout << " Error. Enter from options given " << endl;
        break;
    }
}