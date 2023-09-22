#include <iostream> 
using namespace std;

int main() {
    cout << " Enter a number and get is Factorial " << endl;
    int num;
    cin >> num;
    int i = 1;
    int x = 1;
    while (x <= num) {
       
        i = i *x;
        
        x++;
    } 
    cout << i << endl;
}