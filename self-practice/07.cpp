/*
 * EXPLISIT TYPE CONVERSION
 *
 * C-stype      casts
 * static       casts
 * const        casts
 * dynamic      casts
 * reinterpret  casts
 *
 */

#include <iostream>

void func01() {
    // C-style type conversion
    // type conversion happens at runtime
    int x { 10 };
    int y { 4 };
    double d { (double) x / y };
    std::cout << d << '\n';
}

void func02() {
    // C++ type conversion (c version)
    int x { 10 };
    int y { 4 };
    double d { double(x) / y };
}

void func03() {
    // static_cast type checking happens at compiletime
    char c { 'a' };
    std::cout << c << ' ' << static_cast<int>(c) << '\n';
}

int main() {
    func03();
}
