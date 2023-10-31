#include<iostream>
using namespace std;

int main() {
    cout << "Prime numbers from 2-100  " << endl;
    int i, j;
    for(i =2; i<=100; i++) {
        for(j=2; j<i;j++) {
            if(i%j==0) {
                cout << "";
                break;
            } 
        }   if(j==i) {
        cout << i << " " << " :is a prime number " << endl;
    } 
    }
}