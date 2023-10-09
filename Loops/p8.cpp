#include <iostream> 
using namespace std;

int main() {
    cout << "Input a number a check if its a prime" << endl;
    int num;
    cin >> num;

    while (num%2==0) {
        cout << "Not Prime " << endl;
        break;
    } if (!num%2==0) {
        cout << "Prime Number " << endl;
    }
}