//Write a program that reads 8 integers into a vector and counts the occurrences of a particular number specified by the user. Output the count.
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v1;
    int x=0;
    int z;
    while(x<8) {
        cin >> z;
        v1.push_back(z);
        x++;
    }
    cout << "What number are you looking for? " << endl;
    int y;
    cin >> y;
    int count=0;
    for(int i=0; i<v1.size(); i++) {
        if(v1[i]==y) {
            count++;
        }
    } cout << y << " was found " << count << " times" << endl;

}