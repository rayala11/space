// user birth day and current date
#include <iostream>
using namespace std;

int main() {
    cout << "Enter you Birthday - Month,Day,Year " << endl;
    int bm,bd,by; 
    cout << "Birth month, birth day, birth year: " << endl;
    cin >> bm >> bd >> by;
    cout << "Current month, current day, current year: " << endl;
    int cm,cd,cy;
    cin >> cm >> cd >> cy;
    int age;

    age = cy - by;

    if (bm<=cm && bd<cd) {
        cout << age << " years old" endl;
    } else if (bm>=cm&&bd>cd){
        cout << age - 1 << " years old" << endl;
    } else {
        cout << "Invalid entry " << endl;
    }
}