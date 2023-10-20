//Floyd's Triangle: Develop a program to generate and print Floyd's Triangle for 'n' rows.
//Floyd's Triangle is a right-angled triangular array of natural numbers. For 'n = 4', the pattern looks like this:
#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int num;
    cout << "Enter a number greater than 0 " << endl;
    cin >> num;
    int n = 1;
    for (x = 1; x <= num; x++) {
        for (y = 1; y <= x; y++) {
            cout << n;
            n++;
        } cout << endl;

    }
}