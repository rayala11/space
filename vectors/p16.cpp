#include <iostream>
using namespace std;

int main() {
    int balance = 4504;
    int num;
    int cash;
    int sumCash=0;
    int sumDebit=0;
    int debit;
    int check;
    int sumChecks=0;
    int i=0;
    cout << "Enter entries for cash" << endl;
    cin >> num;
    while(i<num) {
        cin >> cash;
        sumCash+=cash;
        i++;
    } cout << "enter entries for debit card" << endl;
    int num1;
    cin >> num1;
    int j=0;
    while(j<num1) {
        cin >> debit;
        sumDebit+=debit;
        j++;
    } cout << "Enter entries for checks" << endl;
    int num2;
    int z=0;
    cin >> num2;
    while(z<num2) {
        cin >> check;
        sumChecks+=check;
        z++;
    }
    cout << balance << " " << sumChecks << " " << sumDebit << " " << sumCash << endl;
    cout << (balance+sumChecks) - (sumDebit+sumCash);
} 