//Write a C++ program that defines a function called isPalindrome which takes a string parameter and returns true if the string is a palindrome
// (reads the same forwards and backwards), and false otherwise. In the main() function, ask the user for a string and display whether it is a palindrome or not using the isPalindrome function.
#include <iostream>
using namespace std;

bool isPalindrome(string s1) {
    //bool status = true;
    for(int i=0; s1.length(); i++) {
        for(int j= s1.length()-1; j>=0; j-- ) {
            if(s1[i]!=s1[j]) {
                return false;
                break;
            }
        }
    } 
     return true;
}

int main() {
    cout << "Enter a word and check if it is palindrome " << endl;
    string s2;
    cin >> s2;

   if(isPalindrome(s2)) {
    cout << s2 << " is palindrome" << endl;
   } else {
    cout << s2 << " is not palindrome " << endl;
   }
    
}