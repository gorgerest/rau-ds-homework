#include <iostream>
#include <vector>

int findSubsequence(std::vector<int> &mainVec, std::vector<int> &subVec) {
    int mEnd = mainVec.size();
    int sEnd = subVec.size();
    int ret = -1;
    bool check;
    for (int i = 0; i < mEnd; ++i) {
        check = true;
        for (int j = 0; j < sEnd && i + j < mEnd ; ++j) {
            if (mainVec[i + j] != subVec[j]) {
                check = false;
                break;
            }
        }
        if (check) {
            ret = i;
        }
    }
    return ret;
}

int main() {
    std::vector<int> main_vec = {1, 2, 3, 4, 5, 6};
    std::vector<int> sub_vec = {3, 4, 5};
    int index = findSubsequence(main_vec, sub_vec);
    // результат: 2

    std::cout << index << std::endl;
    
    return 0;
}
