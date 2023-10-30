#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    cout << "what are ou looking for? " << endl;
    string s4;
    string s5;
    cin >> s4 >> s5;
    string s2;
    int occur = 0;
    int i;

    for (i = 0; i<= s1.length(); i++) {
        if(s1[i] == ' ') {
            s2 = "";
        } else {
            s2 = s2 + s1[i];
             if (s2 == s4 || s2 == s5) {
                occur++;
            }
        }
    } cout << s4<<  " appears " << occur << " times " << endl; 
}