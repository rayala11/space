#include <iostream>
using namespace std;

int main () {
    cout << "Enter a word " << endl;
    string word{};
    cin >> word;
    word[0]= 'S';
    cout << word;
}