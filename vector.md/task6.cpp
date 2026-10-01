#include <iostream>
#include <vector>

template <typename T>
void resizeVector(std::vector<T> &vec, int newSize, T def = T()) {
    std::cout << "Size: " << vec.size() << '\n';
    std::cout << "Capacity: " << vec.capacity() << '\n';

    vec.resize(newSize, def);

    std::cout << "Size: " << vec.size() << '\n';
    std::cout << "Capacity: " << vec.capacity() << '\n';
}

int main() {
    std::vector<int> vec = {1, 2, 3};
    for (auto &x : vec) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    resizeVector(vec, 5, 42);
    for (auto &x : vec) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    return 0;
}
