#include<iostream>
using namespace std;

int main() {
    int num;
    int product;
    cin >> num;
    product = num;
    for(int i = 1; i<num; i++) {
        product = product * i;
        cout << product << endl;
    } 
}