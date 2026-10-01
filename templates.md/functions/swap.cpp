#include <iostream>

template <typename T>
void swap(T& a, T& b) {
    T c = a;
    a = b;
    b = c;
}

void test() {
    int ia = 1;
    int ib = 2;
    double da = 1.5;
    double db = 2.5;
    std::string sa = "sa";
    std::string sb = "sb";

    std::cout << "before swaps:\n"
            << "ia = " << ia << "\n"
            << "ib = " << ib << "\n"
            << "da = " << da << "\n"
            << "db = " << db << "\n"
            << "sa = " << sa << "\n"
            << "sb = " << sb << "\n\n";
    swap(ia, ib);
    swap(da, db);
    swap(sa, sb);
    std::cout << "after swaps:\n"
            << "ia = " << ia << "\n"
            << "ib = " << ib << "\n"
            << "da = " << da << "\n"
            << "db = " << db << "\n"
            << "sa = " << sa << "\n"
            << "sb = " << sb << "\n";
}


int main() {
    test();
    return 0;
}
