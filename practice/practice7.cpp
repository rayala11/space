#include <iostream>
using namespace std;

int main() {
    int num, r, sum = 0, t;
    cout << "Enter a number " << endl;
    cin >> num;
    t = num;
    while(num!=0) {
        r=num%10;
        sum = sum+r*r*r;
        num = num/10;
    } if(t==sum) {
        cout << "Armstrong Number " << endl;
    } else {
        cout << "Not Armstrong Number " << endl;
    }
}