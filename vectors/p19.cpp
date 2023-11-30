// Write a program that reads integers into a vector until 0 is entered, then calculates and prints the average and variance of the elements in the vector.
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> v1;
    int x;
    double sum = 0;
    double amount = 0;

    do
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        amount++;
        sum += x;
        v1.push_back(x);
    } while (x != 0);
    cout << sum / amount << " is the average" << endl;
    double variance = 0;
    for (int value : v1)
    {
        variance += pow(value - amount, 2);
    }
    variance /= amount;
    cout << "Variance " << variance << endl;
}