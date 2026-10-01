#include <iostream>
#include <vector>


template <typename T>
std::vector<T> filterVector (const std::vector<T>& vec, bool (*filter)(T smth)) {
    std::vector ret = vec;
    for (int i = 0; i < ret.size(); ++i) {
        if (filter(ret[i])) {
            ret.erase(ret.begin() + i);
        }
    }
    return ret;
}

bool isEven(int x) { return x % 2 != 0; }

int main() {

    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    std::vector<int> filtered = filterVector(vec, isEven);
    // filtered содержит: {2, 4, 6}
    for (const auto &x : filtered) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
