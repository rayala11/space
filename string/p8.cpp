/*Create a C++ program that takes a text input containing two words
 and replaces all the characters of the second word with '*'. 
For example, if the input is "hello world," the program should output "hello *****." */
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    int i=0;
    while (i < s2.length()) {
        s2[i]= '*';
        i++;
    } cout << s1 << " " << s2;
}   