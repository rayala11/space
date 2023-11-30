//Write a program that reads integers into two separate vectors until 0 is entered for each, then finds and prints the common elements (intersection) between these vectors.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int x;
    int z;

    do {
        cin >> x;
        if(x==0) {
            break;
        }
        v1.push_back(x);
    } while(x!=0);
    do {
        cin >> z;
        if(z==0) {
            break;
        } 
        v2.push_back(z);
    } while(z!=0);
    for(int h : v1) {
        for(int l : v2) {
            if(h==l) {
                v3.push_back(h);
                break;
            }
        }
    } for(int s : v3) {
        cout << s << " ";
    }
}