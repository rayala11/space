#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    string firstName = "";
    string currentName = "";
    bool inName = false;

    for (char c : s1) {
        if (c != ' ') {
            currentName += c;
            inName = true;
        } else if (inName) {
            if (firstName == "" || currentName < firstName) {
                firstName = currentName;
            }
            currentName = "";
            inName = false;
        }
    }    if (inName && (firstName == "" || currentName < firstName)) {
        firstName = currentName;
    }

    if (firstName != "") {
        cout << "The first name in alphabetical order is: " << firstName << endl;
    } 

    return 0;
}
