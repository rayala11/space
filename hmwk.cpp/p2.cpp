#include <iostream>
#include <iostream>
using namespace std;

int main() {
    string s1;
    string s2="";
    string s3="";
    getline(cin, s1);
    
    bool ascend = true;
    for (size_t i = 0; i<s1.length(); i++) {
        if (s1[i] == ' ') {
            if(s2 < s3) {
                s3 = s2;
                s2 = "";
            } else {
                ascend = false;
                break;
            }
        } else {
            s2 = s2 + s1[i];
        }
    } if (ascend) {
        cout << " Sorted " << endl;
    } else {
        cout << " Not sorted " << endl; 
    }
}