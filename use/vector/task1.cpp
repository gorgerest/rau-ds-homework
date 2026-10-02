#include <iostream>
#include <vector>

void createAndFillVector(int N) {
    std::vector<int> vec(N);    
    std::cout << "Size: " << vec.size() << '\n';
    std::cout << "Capacity: " << vec.capacity() << '\n';
    for (int i = 0; i < N; i++) vec[i] = i+1;
    for (int x : vec) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main() {
    createAndFillVector(10);
    return 0;
}
