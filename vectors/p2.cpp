#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> vec;
    double x;
   
    int y = 0;
    int count = 0;
    do
    {
        cin >> x;
         vec.push_back(x);
        y += x;
        count++;
    } while (x != 0);
    for (int i = 0; i < count; i++)
    {
        cout << vec[i] << " ,";
    }
    cout << endl << vec.size();
}