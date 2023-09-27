//Write a C++ program that receives number items in an invoice from user (n) and then receives price of those n items from user and prints total of prices of all items. 
#include <iostream>
using namespace std;

int main() {
    int items,prices,counter=1,sum=0;
    cout << "How many items? " << endl;
    cin >> items;
    
    while (counter<=items) {
        cin >> prices;
        sum= sum + prices;
        counter++;
    } cout << sum;
}