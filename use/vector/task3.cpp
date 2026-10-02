#include <iostream>
#include <vector>

void createVectorFromInput() {
    std::vector<int> vec;
    int a;
    while (true) {
        std::cin >> a;
        if (a == 0) break;

        vec.push_back(a);
    }

    for (const auto &x : vec) {
        std::cout << x << ' ';
    }
    std::cout << "\n";
}

int main() {
    createVectorFromInput();
    return 0;    
}
