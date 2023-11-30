//Input 9 integers into a vector and remove any duplicates, leaving only unique elements in the vector. Print the modified vector.
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int>v1;
    unordered_set<int>unique;
    int i=0;
    int x;

    while(i<9) {
        cin >> x;
        v1.push_back(x);
        i++;
    }
    for(int z : v1) { //only insert unique numbers
        unique.insert(z);
    }
    for(int h : unique) {
        cout << h << " ";
    }
}