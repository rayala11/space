#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    string text="";
    do {
    text = to_string(num%2)+text;
     num = num/2;
     
    } while (num>0);
    cout << text;
}