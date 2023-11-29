// Create two vectors with 4 integers each. Merge these two vectors into a third vector and print the merged vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {5, 6, 7, 8};
    vector<int> v3;

    for (int i : v1)
    {
        v3.push_back(i);
    }
    for (int j : v2)
    {
        v3.push_back(j);
    }
    for (int z : v3)
    {
        cout << z << " ";
    }
}