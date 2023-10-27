// Write a program that takes a string as input and uses a `for` loop to remove all spaces from the string. Display the modified string.
#include <iostream>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);
    string s2;
    for (int i = 0; i <= s1.length(); i++)
    {
        if (s1[i] != ' ')
        {
            s2 = s2 + s1[i];
        }
    }
    cout << s2;
}