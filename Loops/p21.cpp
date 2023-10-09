/*Create a C++ program that uses a `while` loop to repeatedly ask the user for a positive integer until they enter a negative number.
 Keep track of how many positive integers were entered and display that count at the end.*/
 #include <iostream> 
 using namespace std;

 int main() {
    int n,amount=0;
    do {
        cin >> n;
        amount=amount+1;
    } while (n >=0);
    cout << amount << endl;
 } 