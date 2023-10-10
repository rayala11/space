//Develop a C++ program that accepts a text input with multiple words and prints the index (location) of the first word that starts
// with the character 'a'. If there is no word starting with 'a', the program should print "not found."
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    
   size_t position= s1.find('a');
   if (position!=string::npos) {
       cout << "Found at position " << position << endl;
       
   } else {
       cout << "Not found " << endl;
   }
}