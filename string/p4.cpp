#include <iostream>
using namespace std;

int main() {
    string name;
    getline(cin, name);
    // char ch= name{0}
    int x = name.length();

    cout << name[0] <<  name[1] << name[2]<< name [x-1] << endl;

    
}