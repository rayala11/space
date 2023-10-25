//Write a C++ program that receives two words and prints out the word that comes first in alphabetical order. Use `for` loop to solve this problem.
#include<iostream>
using namespace std;

int main() {
    int i;
    string s1, s2, s3;
    getline(cin, s1);

    for (i = 0; i<=s1.length(); i++) {
        if (s1[i]== ' ') {
            s3 = s2;
            s2 = "";
        } else {
            s2 = s2 + s1[i];
        }
        
    } if (s3>s2) {
        cout << s2;
    } else {
        cout << s3;
    }

}