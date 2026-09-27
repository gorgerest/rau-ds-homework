#include <iostream>
#include <vector>
#define SMTH 300


void manageCapacity(std::vector<int> &vec) {
    std::cout << "Size: " << vec.size() << '\n';
    std::cout << "Capacity: " << vec.capacity() << '\n';

    vec.reserve(SMTH);
    for (int i = 0; i < SMTH; i++) {
        vec.push_back(i+1);
    }

    std::cout << "Size: " << vec.size() << '\n';
    std::cout << "Capacity: " << vec.capacity() << "\n\n";
}

int main() {
    std::vector<int> vec;
    manageCapacity(vec);
    
    return 0;
}
