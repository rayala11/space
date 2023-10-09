#include <iostream>

int main() {
    std::cout << "Prime numbers between 1 and 50 are:" << std::endl;

    for (int num = 2; num <= 50; ++num) {
        bool isPrime = true;

        // Check if num is prime
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        // If num is prime, print it
        if (isPrime) {
            std::cout << num << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}