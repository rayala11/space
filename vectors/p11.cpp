//Input 6 integers into a vector. Modify the vector by doubling the value of each element, and then print the modified vector.
#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int>v1;
    vector<int>v2;
    int x = 0;
    int y;
    
    while(x<6) {
        cin >> y;
        v1.push_back(y);
        x++;
    } for(int i=0; i<v1.size();i++) {
        v1[i]=v1[i]*2;
    } for(int j=0; j<v1.size(); j++) {
        cout << v1[j];
    }
}