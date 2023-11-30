//Develop a program that reads integers into a vector until 0 is entered, then counts the frequency of each element and prints the elements along with their frequencies.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v1;
    int x;

    do{
        cin >> x;
        if(x==0) {
            break;
        } else {
            v1.push_back(x);
        }
    } while(x!=0);
    int count = 1;

    for(int j=0; j<v1.size(); j++) {
        count = 0;
        for(int k =0; k<v1.size(); k++) {
            if(v1[j]==v1[k]) {
                count++;
            }
        } bool status = false;
    for(int b =j- 1; b>=0; b-- ) {
        if(v1[j]==v1[b]) {
            status = true;
            break;
        }
    } if(!status) {
        cout << v1[j] << " occurs : " << count << " times" << endl; 
    }
    }  
}