// Write a C++ program that receives a string of 0s and 1s (a binary representation) and calculates its base-10 equivalent, then prints it out.
// Example: Input: "1101" Output: 13
#include <iostream>
using namespace std;

int main()
{
   string text;
   cin >> text;
   int dec=0;
   int posValue =1;
   for(int i=text.length()-1; i>=0; i--) {
    if(text[i]=='1') {
        dec = dec + posValue;
    } 
    posValue = posValue * 2;
   } cout << dec << " is the decimal number ";
}