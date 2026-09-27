#include <iostream>
#include <vector>

void resizeVector(std::vector<int> &vec, int newSize, int def) {
    std::cout << "Size: " << vec.size() << '\n';
    std::cout << "Capacity: " << vec.capacity() << '\n';

    vec.resize(newSize, def);

    std::cout << "Size: " << vec.size() << '\n';
    std::cout << "Capacity: " << vec.capacity() << '\n';
}

int main() {
    std::vector<int> vec = {1, 2, 3};
    for (int &x : vec) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    resizeVector(vec, 5, 42);
    for (int &x : vec) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    return 0;
}
