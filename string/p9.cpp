#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s1,s2,s3;
    getline(cin, s1);
    istringstream iss(s1);
    
    while (iss >> s2) {
        s3+=s2[0];
    } cout << s3;
    
}