#include <iostream>
#include <typeinfo> // for typeid().name()

// here, is int converted to double, or a copy of the orignal 
// is created?

void func01() {
    int i {2};
    double d {3.5};
    std::cout << typeid(i + d).name() << " " << i + d << '\n';
}

void func02() {
    short a {4};
    short b {5};
    std::cout << typeid(a + b).name() << ' ' << a + b << '\n';
}

void func03() {
    std::cout << typeid(5u - 10).name() << ' ' << 5u - 10 << '\n';
}

void func04() {
    std::cout << std::boolalpha << (-3 < 5u) << '\n';
    // here implisit type conversion happens and ...
}

int main() {
    func01();
    func02();
    func03();
    func04();
    return 0;
}
