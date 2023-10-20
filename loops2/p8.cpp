//Hollow Rectangle: Write a program to print a hollow rectangle pattern of asterisks with 'm' rows and 'n' columns.
 //The user inputs 'm' and 'n', and the program generates the pattern with a hollow interior.
 #include <iostream>
 using namespace std;

 int main() {
    int mrows;
    int ncolumns;
    cin >> mrows >> ncolumns;

    int x = 0;
    int j = 0;

    while (x < mrows) {
        cout << endl;
        while ( j < ncolumns) {
           
            j++;
        } cout << "* ";
        cout << endl; 
        x++;
    }
 }