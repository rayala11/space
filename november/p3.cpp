//Write a program that asks the user for their email address and extracts the domain name from it.
#include <iostream>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    int i;
    int x =0;
    for(i=0; i<=s1.length();i++) {
        if(s1[i]=='@') {
            x = 1;
        } if (x==1) {
            cout << s1[i];
        }
    }
}