 //Create a program that receives a sentence from the user and counts the number of words in the sentence. A word is defined as a sequence of characters separated by space
 #include <iostream>
 #include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int i=0;
    int count=0;
    while (i<s.length()) {
        if (s[i]== ' ') {
            count++;
        } i++;
    } cout << count+1;
}
    