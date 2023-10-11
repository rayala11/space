/*Develop a program that checks if a given text string is a palindrome. A palindrome is a word, phrase, or sequence that reads the same backward as forward. 
Can you write the same program to check if a given text is a palindrome ignoring spaces and punctuation? */
#include <iostream>
#include <string> 
using namespace std;

int main() {
    string s,s2;
    getline(cin, s);
    int i=0;
    bool found;
    while (i<s.length()) {
        s2=s[i]+s2;
        if(s==s2) {
            found=true;
        } else {
           found=false;
    } i++;
}  cout << found;
}