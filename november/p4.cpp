//Create a program that takes a string and checks if it is a valid phone number. Use `for` loop and check if the phone number follows +1(123)456-7890 format.
#include<iostream>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    int i;
    int y;
    for(i=0;i<=s1.length();i++) {
        if(s1[0]=='+') {
            continue;
        } if(s1[1] > 0) {
            continue;
        } if(s1[2]=='(') {
            continue;
        } if(s1[3]>0) {
            continue;
        }if(s1[4]>0) {
            continue;
        } if(s1[5]>0) {
            continue;
        } if(s1[6]==')') {
            continue;
        } if(s1[7]>0) {
            continue;
        } if(s1[8]>0) {
            continue;
        } if(s1[9]>0) {
            continue;
        } if(s1[10]=='-') {
            continue;
        } if(s1[11]>0) {
            continue;
        } if(s1[12]>0) {
            continue;
        } if(s1[13]>0) {
            continue;
        } if(s1[14]>=0) {
            continue;
        } cout << true;
    } 
}