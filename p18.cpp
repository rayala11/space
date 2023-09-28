/*Write a C++ program that receives 5 numbers from the user and prints "Ascending" if 
numbers that are entered are in the ascending order. Use a while loop to solve 
this problem. Example of an ascending list: 1, 9, 25, 45, 129 */
#include <iostream>
using namespace std;

int main() {
    int n=0,counter=1,total;
    cout << "Enter 5 numbers and display them in an Ascending order "; 
    total = n;
    while (counter <= 5) {
        cin >> n;
        if (n > total ) {
            total = n;
            }
    counter++;
    } cout << total;
}