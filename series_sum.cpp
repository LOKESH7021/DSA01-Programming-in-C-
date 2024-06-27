#include <iostream>
#include <cmath>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 5; // Sample input
    double sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += factorial(i) / i;
    }

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}
