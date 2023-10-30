#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    
    cout << "What string are you looking for ? " << endl;
    
    string s2;
    getline(cin, s2);
    
    int found = s1.find(s2);

   if (found != string::npos ) {
    cout << s2 << " was found " << endl;
   } else {
    cout << s2 << " was not found " << endl;
   } 
}