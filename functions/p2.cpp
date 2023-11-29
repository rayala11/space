//Create a C++ program that defines a function named sayHi which takes a string parameter (the name) and greets the user with 
//"Hello, [Name]!" In the main() function, repeatedly ask the user for a name until the user enters "end". Use the sayHi function to greet each entered name.
#include <iostream>
using namespace std;

string sayHi(string s1)
{
    cout << "Hello, " << s1 << endl;
    return s1;
}
int main()
{
    string s2;
    do
    {
        cin >> s2;
        if(s2=="end") {
            break;
        }
        sayHi(s2);
    } while (s2 != "end");
}