#include<iostream> 
using namespace std; 

int main() { 
    string s1, s2; 
    //cin >> s1 >> s2; 
    getline(cin, s1); 
    getline(cin, s2); 

    // the value of found will be position that s2 is found at or it is going to be -1 if s2 is not found in s1
    int found = s1.find(s2); 
    if (found == -1) { 
        cout << "not found\n";
        cout << found << endl;
    } else { 
        cout << "found\n";
        cout << found << endl; 
    }
}