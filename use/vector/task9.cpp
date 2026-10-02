#include <iostream>
#include <vector>

std::vector<std::vector<int>> groupAdjacent(std::vector<int> &vec) {
    std::vector<std::vector<int>> ret;
    ret.push_back({vec[0]});

    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] == vec[i - 1]) {
            ret.back().push_back(vec[i]);
        } else {
            ret.push_back({vec[i]});
        }
    }
    return ret;
}

int main() {
    std::vector<int> vec = {1, 1, 2, 2, 2, 3, 1, 1};
    std::vector<std::vector<int>> groups = groupAdjacent(vec);
    // groups содержит: {{1, 1}, {2, 2, 2}, {3}, {1, 1}}

    for (const auto &x : groups) {
        for (const auto &y : x) {
            std::cout << y << ' ';
        }
        std::cout << std::endl;
    }
    
    return 0;
}
