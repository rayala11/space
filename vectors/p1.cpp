#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> studHeight(5);

    for(int i=0; i < 5; i++ ) {
        cin >> studHeight[i];
        } for(int j=0; j< 5; j++) {
            cout << studHeight[j] << " ,";
        }
}