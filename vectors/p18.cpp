// Create a program that reads integers into a vector until 0 is entered,
// then rotates the elements of the vector by a given number of positions (input from the user) to the left and prints the rotated vector.
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
        v1.push_back(x);
    } while (x != 0);
    cout << " rotate by how many?" << endl;
    int h;
    cin >> h;

    int n = v1.size();

    for (int l = 0; l < h; l++)
    {
        int temp = v1[0];
        for (int k = 0; k < n - 1; k++)
        {
            v1[k] = v1[k + 1];
        }
        v1[n - 1] = temp;
    }
    for (int z : v1)
    {
        cout << z << " ";
    }
}