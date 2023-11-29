//Input 9 integers into a vector and remove any duplicates, leaving only unique elements in the vector. Print the modified vector.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    int x = 0;
    int i;

    while(x<9) {
        cin >> i;
        v1.push_back(i);
        x++;
    }
    for(int z : v1) {
        for(int j = v1.size()-1; j >=0; j--) {
            if(v1[j]!=z) {
                cout << z;
            }
        }
    }
}