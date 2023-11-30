//Create a program that reads 6 integers into two separate vectors. 
//Perform element-wise addition of these two vectors and store the result in a third vector. Finally, print the resulting vector.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int x;
    int z;
    int i=0;
    int p=0;

    while(i<6) {
        cin >> x;
        v1.push_back(x);
        i++;
    }   while(p<6) {
        cin >> z;
        v2.push_back(z);
        p++;
    }
    for(int h=0; h<6; h++) {
        int result = v1[h]+v2[h];
        v3.push_back(result);
    }
    for(int e : v3) {
        cout << e << " ";
    }
}