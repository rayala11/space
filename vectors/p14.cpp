//Write a program that reads 10 integers into a vector and extracts a subrange of elements (from index 2 to index 6) into a new vector, then print the new vector.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> v1;
    int i=0;
    int x;
    while(i<10) {
        cin >> x;
        v1.push_back(x);
        i++; 
    }
    for(int j=2; j<=6; j++) {
        cout << v1[j];
    } 
}