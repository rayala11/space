//Write a program that converts a string to uppercase. Use `for` loop to solve the problem. 
#include<iostream>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    int i=0;
    char ch;

    for(i=0;i<=s1.length();i++) {
        ch = toupper(s1[i]);
        cout << ch;
    }
}