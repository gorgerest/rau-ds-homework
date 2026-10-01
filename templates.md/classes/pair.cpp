#include <iostream>

// template <typename T = int, typename U = double>
template <typename T, typename U>
// template <typename T, typename U>
class Pair {
private:
    T a;
    U b;

public:
    Pair(const T& _a = T(), const U& _b = U()) : a(_a), b(_b) {}
    
    void print() {
        std::cout << a << ", " << b << "\n";
    }
};

void tests() {
    int a = 2;
    double b = 3.4;
    std::string c = "Hello, world!";

    Pair<int, double> p1(a); 
    Pair p2(c, b);
    Pair<int, int> p3(b, a); 

    p1.print();
    p2.print();
    p3.print();
}

int main() {
    tests();
    return 0;
}
