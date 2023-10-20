//Floyd's Triangle: Develop a program to generate and print Floyd's Triangle for 'n' rows.
//Floyd's Triangle is a right-angled triangular array of natural numbers. For 'n = 4', the pattern looks like this:
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int x = 0;
    int n = 4;
    

    while (i <= 10) {
       x = 0;
        while (x <= i) {
            cout << i;
            x++;

        } cout << endl;
        i++;
    }
}