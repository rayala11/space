//Develop a program that calculates and prints the factorial of a number using a `for` loop.
#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int product = 1;
        for (int i = 1; i <= num; i++){
            product = product * i;
        } cout << product;
}