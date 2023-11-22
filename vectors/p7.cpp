// Write a program that receives two sequence of numbers and put them in two vectors from the input (each sequence ends when 0 is entered) and checks if they have the same elements in arbitrary order.
// Example input: 12, 2, 5, 9,0, 2, 9, 5, 12, 0
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    int x;
    int y;
    bool status = false;
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
    do
    {
        cin >> y;
        if (y == 0)
        {
            break;
        }
        else
        {
            v2.push_back(y);
        }
     } while (y != 0);

        for (int i = 0; i < v1.size(); i++)
        {   status = false;
            for (int j = 0; j < v2.size(); j++)
            {
                if (v1[i]==v2[j])
                {
                    status = true;
                    break;
                }
            }
        }
        if (!status)
        {
            cout << " two vectors do not have same elements " << endl;
        }
        else
        {
            cout << " two vectors have same elements " << endl;
        }
    } 
    