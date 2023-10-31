#include <iostream>
#include <cmath>
#include <cstdlib> // required for rand()
#include <ctime> //required for time()
using namespace std;

int main() {

    int random_number = 0;
    size_t count = 10; // number of random numbers to generate
    int min = 1;
    int max = 6;

    cout << " RAND_MAX on my system is " << RAND_MAX;
    srand(time(nullptr));

    for(size_t i = 1; i<=count; i++) {
        random_number = rand () % max + min;
        cout << random_number << endl;

    }

}