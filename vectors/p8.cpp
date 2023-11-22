// Create a program that inputs 5 integers into a vector. Then, remove the last element from the vector and print the updated vector.
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
    v1.pop_back();
    int y = 0;
    while (y < v1.size())
    {
        cout << v1[y] << " ";
        y++;
    }
}