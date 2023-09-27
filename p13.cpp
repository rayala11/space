//Write a C++ program that uses a `while` loop to find the sum of all numbers from 1 to 100 that are divisible by both 3 and 5.
#include <iostream>
using namespace std;

int main() {
    cout << "Sum of number 1 thru 100 that are divisible by 3 and 5 " << endl;
    int sum=0,x=1;

    while (x<=100) {
        if (x%3==0&&x%5==0) {
            sum = sum + x;
        } x++;
    } cout << sum << endl;
}