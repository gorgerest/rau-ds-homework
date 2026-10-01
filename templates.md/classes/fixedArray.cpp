#include <iostream>
#include <stdexcept>

template <typename T, int N = 1>
class FixedArray {
public:
    FixedArray() : n(N), arr(new T[n]) {}
    ~FixedArray() {
        delete [] arr;
    }
    
    void set(int index, const T& value) {
        if (index >= n || index < 0) {
            throw std::invalid_argument("вышел за рамки массива");
        } 
        arr[index] = value;
    }
    T get(int index) {
        if (index >= n || index < 0) {
            throw std::invalid_argument("вышел за рамки массива");
        } 
        return arr[index];  
    } 
    int size() {
        return N;
    }
private:
    int n;  
    T* arr;
};

void tests() {
    FixedArray<int, 5> farr1;
    FixedArray<int> farr2;

    for (int i = 0; i < farr1.size(); ++i) {
        farr1.set(i, i + 1); 
    }
    farr2.set(farr2.size() - 1 , 10);

    for (int i = 0; i < farr1.size(); ++i) 
        std::cout << farr1.get(i) << " ";
    std::cout << "\n";

    std::cout << farr2.get(0);
    

}

int main() {
    tests();
    return 0;
}
