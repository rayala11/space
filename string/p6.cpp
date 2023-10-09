//Create a C++ program that prompts the user for their name and displays a personalized welcome message.
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name " << endl;
    getline(cin, name);
    
    cout << "Good evening " << name << " How are you today " << endl;
}