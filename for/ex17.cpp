//Create a C++ program that asks the user for an integer and then uses a `for` loop to print the Fibonacci sequence up to the entered number
//. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding ones.
#include <iostream>
using namespace std;

int main() {
    int num1 = 0;
    int num2 = 1;
    int num3;
    int i=1;
    int n;
    cin >> n;
    cout << num1 << num2;
    for(i = 1; i <= n; i++) {
        num3 = num1 + num2;
        num1=num2;
        num2=num3;
        cout << num3 << endl;
    }
    
}