// check if number is prime
#include <iostream>
using namespace std;

int main() {
    int num;
    int i;
    cin >> num;
    for(i = 2; i<=num; i++) {
        if(num%i==0) {
            cout << "";
            break;
        }
    } if(i==num) {
        cout << num << " is prime " << endl;
    } else {
        cout << num << " is not a prime " << endl;
    }
}