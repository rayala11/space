/*Write a program to receive integers (stop when 0 entered), put them in a vector and then prints out sum of all numbers except maximum value in the list.
Example input: 12, 2, 5, 9, 13, 3, 23, 9, 0
Output: 53 */
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v1;
    int x=0;
    int num=0;
    int sum=0;
    int max;
    do {
        cin >> x;
        if(x==0) {
            break;
        } else {
            v1.push_back(x);
        }
    } while(x!=0);
        max = v1[0];
    for(int i=0; i<v1.size();i++) {
       if(v1[i]>max) {
        max = v1[i];
       } 
       sum+=v1[i];
        
    } cout << sum - max;
}