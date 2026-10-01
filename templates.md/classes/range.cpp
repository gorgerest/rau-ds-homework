#include <iostream>

template<typename T>
class Range {
public:
    Range(T start = T(), T end = T()) : _start(start), _end(end) {}

    bool contains(const T& value) {
        if (value >= _end || value <= _start) return false;
        return true;
    }
    T length() {
        return _end - _start;
    }
    void print() {
        std::cout << "[" << _start << ", " << _end << "]";
    }
    
private:
    T _start;
    T _end;  
};

void test() {
    Range<int> integers(3, 10);
    Range<double> doubles(1.5, 20.2);
    Range<char> simvoli('a', 'f');

    int example1_int = 7;
    int example2_int = 12;
    double example1_double = 3;
    double example2_double = 1.2;
    char example1_char = 'b';
    char example2_char = 'z';

    std::cout << "Tests:\n\n";
    // ----------------------------------------------- ints
    std::cout << "for ints:\n"
            << "Range: ";
    integers.print();

    std::cout << "\nLength: " << integers.length() << "\n";
    std::cout << "Range contains " << example1_int << ": " << std::boolalpha << integers.contains(example1_int) << std::endl; 
    std::cout << "Range contains " << example2_int << ": " << std::boolalpha << integers.contains(example2_int) << std::endl; 

    // ------------------------------------------------ double
    std::cout << "\nfor doubles:\n"
            << "Range: ";
    doubles.print();

    std::cout << "\nLength: " << doubles.length() << "\n";
    std::cout << "Range contains " << example1_double << ": " << std::boolalpha << doubles.contains(example1_double) << std::endl; 
    std::cout << "Range contains " << example2_double << ": " << std::boolalpha << doubles.contains(example2_double) << std::endl; 

    // ------------------------------------------------ double
    std::cout << "\nfor chars:\n"
            << "Range: ";
    simvoli.print();

    std::cout << "\nLength: " <<simvoli.length() << "\n";
    std::cout << "Range contains " << example1_char << ": " << std::boolalpha << simvoli.contains(example1_char) << std::endl; 
    std::cout << "Range contains " << example2_char << ": " << std::boolalpha << simvoli.contains(example2_char) << std::endl; 
}

int main() {
    test();
    return 0;
}

