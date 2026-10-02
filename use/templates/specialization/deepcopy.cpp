#include <iostream>

template <typename T>
T copyValue(const T& val) {
    return val;
}
template <typename T>
T* copyValue(const T* val) {
    // T* newVal = new T(*val);
    // return newVal;
    return new T(*val); // работает :)
}

void tests() {
    int a_original = 10;
    double b_original = 11.1;

    int* point_int_orig = &a_original; 
    double* point_double_orig = &b_original;

    int a_copy = copyValue(a_original);
    double b_copy = copyValue(b_original);

    int* point_copy = copyValue(point_int_orig);

    std::cout << a_original << " " << a_copy << "\n";
    std::cout << b_original << " " << b_copy << "\n\n";

    std::cout << *point_copy << " " << *point_int_orig << "\n";
    std::cout << point_copy << " " << point_int_orig << "\n";
}

int main() {
    tests();
    return 0;
}
