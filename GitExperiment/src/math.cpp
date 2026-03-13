#include "math.hpp"
#include <stdexcept>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) {
    if (b == 0) throw std::invalid_argument("div by zero");
    return a / b;
}

double safe_divide(int a, int b) {
    if (b == 0) return 0.0;
    return static_cast<double>(a) / static_cast<double>(b);
}
