#include <iostream>

template <typename T>
void printValue(const T& value) {
   std::cout << value << '\n';
}
template <>
void printValue<const char*> (const char* const& val) {
    std::cout << "\"";
    int i = 0;
    while (val[i] != 0) {
        std::cout << val[i++];
    }
    std::cout << "\"\n";
}
template <>
void printValue<bool> (const bool& val) {
    if (val) std::cout << "true\n";
    else std::cout << "false\n";
}

void test() {
    int a = 10;
    double b = 12.1;
    bool fun = true;
    const char* ch = "Hello, world!";

    printValue(a);
    printValue(b);
    printValue(fun);
    printValue(ch);
}


int main() {
    test();
    return 0;
}
