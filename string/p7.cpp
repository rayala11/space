//Find Substring: Create a C++ program that asks the user to enter a text string and a search term. Use the find function to check
 //if the search term is present in the input string. Print a message indicating whether the search term was found or not.
 #include <iostream>
using namespace std;
//Hint s1.find(s2), string::npos
int main() {
    string s1,s2;
    cout << "Enter a string " << endl;
    cin >> s1 >> s2;
    int found = s1.find(s2);
    if (found != string::npos) {
        cout << "found\n";
    } else {
        cout << "not found\n";
    }
    
}