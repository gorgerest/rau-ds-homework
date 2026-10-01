#include <iostream>
#include <vector>

template<typename T>
int linearSearch(const std::vector<T>& vec, const T& a) {
    for (int i = 0; i < vec.size(); ++i) {
        if (a == vec[i]) {
            return i;
        }
    }
    return -1;
}

void tests() {
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::vector<double> b = {1.5, 2.5, 3.5, 4.5, 5.5};
    std::vector<std::string> c = {"1", "2", "3", "4", "5"};

    std::string str = "4";

    std::cout << "Find 2 among int at: " << linearSearch(a, 2) << "\n";
    std::cout << "Find 3.5 among double at: " << linearSearch(b, 3.5) << "\n";
    std::cout << "Find 4 among strings at: " << linearSearch(c, str) << "\n";
    
}

int main() {
    tests();
    return 0;
}
