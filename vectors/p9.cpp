// Write a program that reads integers into a vector until 0 is entered, then reverses the order of elements in the vector and prints the reversed vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    int x;

    do
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        else
        {
            v1.push_back(x);
        }
    } while (x != 0);
    for (int j = v1.size() - 1; j >= 0; j--)
    {
        cout << v1[j] << " ";
    }
}