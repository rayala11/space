#include <iostream>
using namespace std;
//use while loop to calculate and print the sum of the sqaures of the first 15 positive integers.(1^2)
int main() {
    int i,x=1;
    int total = 0;

    while (x<=15) {
        i= x*x;
        total = total + x*x;
        cout << i << endl;
        
        x++;
    } cout << total << endl;
}