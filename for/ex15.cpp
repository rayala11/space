//Develop a C++ program that uses a `for ` loop to generate and print the first 20 terms of the geometric progression with a common ratio of 2, starting with the term 1.
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int result = 1;
        for (int i = 2; i <= 10; i++) {
          result = x * result;
          cout << result << endl;
        }
}