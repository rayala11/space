//Create a program that asks the user to enter a string and a character. Then, use a `for` loop to count and display the number of occurrences of that character in the string
#include <iostream>
using namespace std;

int main() {
    char c = 'a';
    int occur = 0;
    string s1;
    getline(cin, s1);
        for (int i = 0; i <= s1.length(); i++) {
            if (s1[i]== c) {
                occur++;
            } 
        } cout << occur;
}