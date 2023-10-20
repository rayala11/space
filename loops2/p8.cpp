//Hollow Rectangle: Write a program to print a hollow rectangle pattern of asterisks with 'm' rows and 'n' columns.
 //The user inputs 'm' and 'n', and the program generates the pattern with a hollow interior.
 #include <iostream>
 using namespace std;

 int main(){
    int x;
    int y;

    for (x=0; x <= 10; x++) {
        for (y=0; y <= 10; y++) {
            if (x == 0 || x == 10 || y == 0 || y == 10) {
                cout << "*";
            } else {
                cout << " "; }
            
        } cout << endl;
    }
 }