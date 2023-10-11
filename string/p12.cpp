 //Write a program that reverses a given text string. For example, if the input is "hello," the program should output "olleh."
#include <iostream>
#include <string>
using namespace std;

int main() {
    /*cout << " enter a text " ;
    string s;
    getline(cin, s);
    int i=0;
    string s2="";
    while (i < s.length()) {
        s2 = s[i] + s2;
        i++;
    } cout << s2; */
    string s;
    cin >> s;
    int i=0;
    string s2;
    while (i<s.length()) {
        s2= s[i]+s2;
        i++;
    } cout << s2;
}