#include <iostream>
#include <string.h>

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

template <typename T>
bool isEqual(const T& a, const T& b) {
    return a == b;
}
template <>
bool isEqual<const char*>(const char* const& ch1, const char* const& ch2) {
    return strcmp(ch1, ch2) == 0;
}
void test() {
    int a = 0;
    int b = 1;
    int c = 0;
    double g = 1.2;
    double f = 1.2;
    const char* fun = "fun";
    const char* not_fun = "bun";
    
    printValue(isEqual(a, b));
    printValue(isEqual(a, c));
    printValue(isEqual(c, b));
    printValue(isEqual(g, f));
    printValue(isEqual(fun, not_fun));
    printValue(isEqual(fun, fun));
}

int main() {
    test();
    return 0;
}
