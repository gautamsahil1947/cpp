/*
 * IMPLISIT TYPE CONVERSION
 * implisit conversions preserve value != signedness preservation
 */

#include <iostream>
#include <iomanip> // has setprecision

void someFunc(int i) {

}

int main() {

    float f = 0.123456789;
    std::cout << std::setprecision(9) << f << '\n';

    double d {5.0};

    someFunc(d); // bad 
    someFunc(static_cast<int>(d)); // good


    int t {3.5}; // will show error
    int m {static_cast<int>(3.5)}; // no error
    
    return 0;
}
