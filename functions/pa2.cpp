//Create a C++ program that defines a function called swapValues which swaps the values of two integer variables using reference parameters.
//In the main() function, ask the user for two integers, swap their values using the swapValues function, and display the swapped values.
//pass by referance void swap(int&x, int&y) pass by referance(int x, int y)
// arguments and parameters going to use same referance
#include <iostream>
#include<vector>

using namespace std;

void swap(int&x, int&y) {
    int temp = x;
    x = y;
    y = temp;
    
}
int main() {
    int i = 2, b = 10;
    swap(i,b);

    cout << i << " " << b;
}