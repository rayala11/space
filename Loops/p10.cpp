//Write a program that asks the user for a number and uses the while loop to print all the even numbers between 1 and that number.
#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number and print all the even numbers between 1 and that number " << endl;
    int num, x=1;
    cin >> num;

    while (x <= num) {
        cout << x << endl;
        x= x + 2;
        
    }
}