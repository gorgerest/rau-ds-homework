#include <iostream>

template <typename T>
T sumArray(const T* arr, int n) { 
    T sum{};
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

void tests() {
    int* a = new int[5];
    double* b = new double[5];
    std::string* c = new std::string[5];

    for (int i = 0; i < 5; ++i) {
        a[i] = i;
        b[i] = i + 0.5;
        c[i] = std::to_string(i);
    }

    std::cout << "sum of integers: " << sumArray(a, 5) << "\n";
    std::cout << "sum of doubles: " << sumArray(b, 5) << "\n";
    std::cout << "sum of strings: " << sumArray(c, 5) << "\n";
}

int main() {
    tests();
    return 0;
}
