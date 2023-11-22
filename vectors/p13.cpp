//Create two vectors with 4 integers each. Merge these two vectors into a third vector and print the merged vector.
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v1={10,12,13,14};
    vector<int>v2={1,2,4,5};
    vector<int>v3;
    for(int i: v1) {
        v3.push_back(i);
    } for(int j: v2) {
        v3.push_back(j);
    } for (int z: v3) {
        cout << v3[z] << " ";
    }
}