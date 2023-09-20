#include <iostream>
using namespace std;

int main() {
    cout << " enter a value, (1)Monday,(2)Tuesday,(3)Wednesday,(4)Thursday,(5)Friday,(6)Saturday,(7)Sunday " << endl;
    int x;
    cin >> x;

    switch (x) {
        case 1: cout << "Monday is a weekday " << endl;
        break;
        case 2: cout << "Tuesday is a weekday " << endl;
        break;
        case 3: cout << "Wednesday is a weekday " << endl;
        break;
        case 4: cout << "Thursday is a weekday " << endl;
        break;
        case 5: cout << "Friday is a weekday " << endl;
        break;
        case 6: cout << "Saturday is a weekend " << endl;
        break;
        case 7: cout << "Sunday is a weekend " << endl;
        break;
        default: cout << "Wrong value " << endl;
        break;
        
    }
}