//Create a C++ program that defines a function called calculateInterest which calculates simple interest. This function
 //should take three parameters: principal (double), rate (double), and time (int). However, set default values for rate and time (e.g., rate = 5% and time = 1 year).
 //In the main() function, ask the user for the principal amount and optionally the rate and time. Use the calculateInterest function to compute and display the simple
 #include <iostream>
 using namespace std;

 double calculateInterest(double principle, double rate,double time) {
    //rate = 0.05;
    //time = 1;
    double z = principle*rate*1;
    double sum = principle + z;
    return sum;

 }

 int main() {
    cout << " what is the principal? " << endl;
    double rate = 0.05;
    int time = 1;
    double cost;
    cin >> cost;
    double total = calculateInterest(cost, rate, time);
    cout << total << endl;
 }