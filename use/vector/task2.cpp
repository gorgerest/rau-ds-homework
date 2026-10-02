#include <iostream>
#include <vector>

void workWithEmptyVector() {
    std::vector<int> vec;

    for (int i = 1; i <= 10; ++i) {
        vec.push_back(i);
        std::cout << "Size: " << vec.size() << '\n';
        std::cout << "Capacity: " << vec.capacity() << "\n\n";
    }

    for (const auto &x : vec) {
        std::cout << x << ' ';
    }
    std::cout << "\n";
}

int main() {
    workWithEmptyVector();
    return 0;
}
