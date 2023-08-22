/*
 * Assert is used to document/catch programming errors, that should never happen
 * Asserts don't allow recovery from errors. Asserts also come with an added cost each
 * time an assert statement is checked.
 * Assert checks at runtime.
 *
 */

#include <iostream>
#include <cmath> // std::sqrt()
#include <cassert> // assert preprocessor macro 'assert()'

// precondition invariant postcondition
void printDivision(int x, int y) {
    if (y == 0) {
        std::cerr << "Error: division by zero not allowed." << std::endl;
    } 
    std::cout << static_cast<double>(x) / y << std::endl;
}

double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity) {
    // assert(gravity > 0.0); // more descriptive assert messages are required.
    assert(gravity > 0.0 && "A string literal evaluates to boolean true. it increases the code readibility here.");

    if (initialHeight <= 0.0) {
        return 0.0;
    }
    return std::sqrt((2.0 * initialHeight) / gravity);
}

int main() {
    std::cout << "Took " << calculateTimeUntilObjectHitsGround(100.0, -9.8);
    // this fails the assertion condition, and as a result the program exits, but
    // with some usefull information like where did it fail etc.
    std::abort(); // just aborts the program.
}

