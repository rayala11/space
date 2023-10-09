#include <iostream>
using namespace std;

int main() {
    cout << "Enter your first and last name " << endl;
    string first,second;
    cin >> first >> second;
    string full = first +  " " + second;

    cout << "What is your full name?: " << full;
}