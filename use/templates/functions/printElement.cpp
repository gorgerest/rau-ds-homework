#include <iostream>

template <typename T>
void printElement(const T& el) {
    std::cout << el << "\n";
}

void tests() {
    int int_ob = 1;
    double double_ob = 1.5;
    std::string string_ob = "string";

    printElement(int_ob);
    printElement(double_ob);
    printElement(string_ob);
}

int main() {
    tests();
    return 0;
}
