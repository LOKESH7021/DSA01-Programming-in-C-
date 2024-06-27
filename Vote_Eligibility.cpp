#include <iostream>

int main() {
    int age;
    std::cout << "Enter age: ";
    std::cin >> age;

    const int votingAge = 18;

    if (age >= votingAge) {
        std::cout << "You are eligible to vote!" << std::endl;
    } else {
        int yearsRemaining = votingAge - age;
        std::cout << "You are not eligible to vote. " << yearsRemaining << " years left to be eligible." << std::endl;
    }

    return 0;
}
