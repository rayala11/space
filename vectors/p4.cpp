//Write a program to receive an even number of integers (stop when 0 is entered) from the input, put them in a vector and then modify the vector in a way to make sure every pair of numbers is sorted in ascending order. 
//Example input: 12, 2, 5, 9, 13, 3, 23, 9, 0
//Output: 2, 12, 5, 9, 3, 13, 9, 23
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> num;
    int x;
    bool ascend = true;
    int count=0;
    do { 
        cin >> x;
        num.push_back(x);
        count++;

    } while(x!=0);
    for(int i=0; i<count; i++) {
        if(x[i+1]>x[i]) {
            cout << x[i];
        }
    }
}