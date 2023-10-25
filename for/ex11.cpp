//Write a program that calculates and prints the sum of odd numbers from 1 to 1000 using a `for` loop.
#include<iostream>
using namespace std;

int main() {
    int i;
    int sum = 0;
        for (i = 1; i <= 1000; i++) {
            if (i%2==1) {
                //cout << i;
                //cout << endl;
                sum = sum + i;
            }
        } cout << sum;
}