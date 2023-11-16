//Write a C++ program that receives a decimal number and prints its binary representation as a string.
//Example: Input: 10 Output: "1010"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    string binary = "";
    do {
        binary = to_string(number % 2) + binary;
        number /= 2;
    } while (number > 0);

    cout << "Binary representation: " << binary << endl;

    return 0;
}
