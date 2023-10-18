//Write a program that receive a sentence and prints out length of the longest word in the string. The text has no punctuation and only words each separated by one space.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    string s2 = "";
    string s3= "";
    getline(cin, s1);
    int i = 0;

    while (i <= s1.length()) {
        if (s1[i] == ' ') {
            if (s2.length() > s3.length()) {
                s3 = s2;
                
            } s2 = "";
            
        } else {
            s2 = s2 + s1[i];
        }
        i++;
    } if (s2.length() > s3.length()) {
        s3 = s2;
    } cout << s3;
}