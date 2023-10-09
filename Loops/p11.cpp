//Develop a program that uses a do-while loop to keep asking the user for a password until they enter the correct one.
#include <iostream>
using namespace std;

int main() {
    cout << "Guess your password " << endl;
    string password= "RicardoAyala";
    string guess;

    do {
        cout << "Enter Password " << endl;
        cin >> guess;
    } while (guess!=password);
    cout << "Valid Password";
}