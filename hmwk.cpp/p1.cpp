#include<iostream>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    
    bool found = false;

    for(char ch:s1) {
        int count = 0;
        for(char inner: s1) {
            if(ch==inner) {
                count++;
            }
        } if(count==1) {
            found = true;
            cout << ch << " ";
        }
    }
}