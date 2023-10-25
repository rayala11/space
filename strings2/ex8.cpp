#include <iostream>
using namespace std;

int main() {
   int i, j;
   int num;
   cin >> num;
    for (i =1; i<=num; i++) {
        for (j=1; j<=i; j++) {
         cout << j;
       }  for (int y = i-1; y>=1; y--) {
        cout << y;
       } cout << endl;
        }  
    }
