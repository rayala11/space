#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1;
    getline(cin, s1);
   char c='a';
    bool option=false;
   replace(s1.begin(),s1.end(), c, 'H');
   if (c!=option) {
    cout << s1;
    cout << "Not found";
   } else {
    cout << s1;
   }
  
}