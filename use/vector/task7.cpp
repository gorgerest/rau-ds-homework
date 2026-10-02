#include <iostream>
#include <vector>

std::vector<int> mergeSortedVectors(std::vector<int> &v1, std::vector<int> &v2) {
    int size1 = v1.size();
    int size2 = v2.size();
    std::vector<int> v;

    int i = 0; // i for elements from v1
    int j = 0; // j for elelents from v2

    while(true) {
        if (i >= size1 && j >= size2)
            break;
        if (i >= size1) {
            for ( ; j < size2; j++)
                v.push_back(v2[j]);
            break;
        }
        if (j >= size2) {
            for ( ; i < size2; i++)
                v.push_back(v1[i]);
            break;
        }


        if (v1[i] < v2[j]) {
            v.push_back(v1[i]);
            i++;
        }
        else {
            v.push_back(v2[j]);
            j++;
        }
        
    }

    return v;
}

int main() {
    std::vector<int> vec1 = {1, 3, 5, 7};
    std::vector<int> vec2 = {2, 4, 6, 8, 9};

    std::vector<int> merged = mergeSortedVectors(vec1, vec2);

    for (const int &x : merged) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    return 0;
}
