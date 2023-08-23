/*
 * Type Deduction and auto keyword
 */

#include <iostream>
#include <string_view>

void func01() {
    auto d { 5.0 }; // double
    auto i { 1 + 2 }; // int
    auto x { i }; // int
    // auto y {  }; invalid
}

void func02() {
    const int       x   { 5 }; // const int
    auto            y   { x }; // const will be droped
    constexpr auto  z   { x }; // must explicitly mention const or constexpr
}

void func03() {
    auto s { "Hello, world" }; // s is const char* not std::string
    using namespace std::literals;
    auto s1 { "goo"s }; // std::string
    auto s2 { "moo"sv }; // std::string_view
}

int main() {

    return 0;
}
