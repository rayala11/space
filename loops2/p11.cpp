#include <iostream>
using namespace std;

int main() {
    string word;
    cin>> word;
    string newWord="";
    bool oneLetter = true;

    for(int i=0; i<word.length(); i++) {
        oneLetter = true;
        for(int j=0; j<newWord.length(); j++) {
            if(word[i]==newWord[j]) {
                oneLetter = false;
                break;
            }
        } if(oneLetter) {
             newWord = newWord + word[i];
        }
    }  cout << newWord;
}