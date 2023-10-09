//Write a C++ program that receives 5 numbers from the user and prints the
// highest value of them on the screen. Use a while loop to solve this problem. 
#include <iostream>
using namespace std;

int main() {
    int counter=1, num,total=0;
    cout << "Enter 5 numbers " << endl;
    cin >> num;
    total=num;

   while (counter < 5) {
    cin >> num;
    if (num > total) {
        total = num;
    } counter++;
   } cout << total;
   return 0;
}