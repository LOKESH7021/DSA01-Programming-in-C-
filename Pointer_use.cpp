#include <iostream>
#include <algorithm>

int main() {
    const int n = 5; // Number of elements
    int arr[n];

    // Input
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Sorting
    std::sort(arr, arr + n);

    // Print using pointer
    int *ptr = arr;
    std::cout << "Sorted elements using pointer:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << *ptr << " ";
        ++ptr;
    }

    return 0;
}
