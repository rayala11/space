// $.12 unit for first 100, $0.15 for additoinal units 
#include <iostream> 
using namespace std;

int main() {
    cout << "Calculate electricity charge per household based on units consumed " << endl;
    double x = 0.12;
    double y = 0.15;
    int units;

    cout << " Enter units consumed " << endl;
    cin >> units;
    
    if (units >= 0&&units <= 100) {
        cout << units * 0.12 << " Electrical charge " << endl;
    } else if (units > 100) {
        cout << units * 0.15 << " Electrical charge " << endl;
    } else {
        cout << " Enter a valid number " << endl;
    } return 0;
}