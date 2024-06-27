#include <iostream>

int main() {
    const int n = 5; // Number of elements
    double celsius[n] = {0, 10, 20, 30, 40};
    double fahrenheit[n];

    for (int i = 0; i < n; ++i) {
        fahrenheit[i] = (celsius[i] * 9 / 5) + 32;
    }

    std::cout << "Celsius to Fahrenheit Conversion:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << celsius[i] << " Celsius = " << fahrenheit[i] << " Fahrenheit" << std::endl;
    }

    return 0;
}
