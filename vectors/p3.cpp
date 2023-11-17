#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int num;
    int sum1 = 0;
    int sum2 = 0;
    do
    {
        cin >> num;
        vec.push_back(num);
    } while (num != 0);
    for (int i = 0; i < vec.size(); i += 2)
    {
        cout << vec[i] << "+";
        sum1 += vec[i];
    }
    cout << sum1 << endl;
    for (int i = 1; i < vec.size(); i += 2)
    {
        cout << vec[i] << "+";
        sum2 += vec[i];
    }
    cout << sum2;
}
