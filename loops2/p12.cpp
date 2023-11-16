#include<iostream>
using namespace std;

int main() {
    int currVal = 0;
    int val = 0;
    int cnt=0;
     if(cin>>currVal) {
        cnt = 1; // initial count for first input
        while(cin >> val) {
            if(val==currVal) {
                cnt++; // if new input is same as previous, count it
            } else {
                cout << currVal << " occurs " << cnt << " times" << endl;
                currVal=val;
                cnt=1; // restart count to 1
            }

        }
        cout << currVal << " occurs " << cnt << " times" << endl;
    }

    } 
