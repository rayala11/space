//Write a program to input 10 integers into a vector and then prompt the user to enter a number to search for in the vector. Output whether the number was found or not.
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v1;
    int x=0;
    int z;
    while(x<10) {
        cin >> z;
        v1.push_back(z);
        x++;
    }
    int y;
    cout << " enter a number and look for it in the vector" << endl;
    cin >> y;
    bool status = false;
    for(int i=0; i<v1.size(); i++) {
        status = false;
        if(v1[i]==y) {
            status = true;
            break;
        }
    } if(!status) {
        cout << y << " was not found in vector " << endl;
    } else {
        cout << y << " was found in the vector" << endl;
    }
}