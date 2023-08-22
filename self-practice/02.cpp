/*
 * RANDOM NUMBER GENERATION
 * The method by which the next number is generater
 * should not be predictible.
 *
 * All Pseudo random number generators are periodic
 * Period is after what interval, they repeate the sequence
 */
#include <iostream>

int plusOne() {
    static int s_state {3};
    ++s_state;
    return s_state;
    // this algorithm is deterministic, meaning that
    // given the start, the cource can be determined.
}

unsigned int LCG16() {
    // pseudo random number generator 
    static unsigned int s_state {5352};
    s_state = 8253729 * s_state + 2396403;
    return s_state % 32768;
    // but this is not random at all, is still
    // deterministic, like the plusOne function
}

int main() {
    // std::cout << plusOne() << std::endl;
    // std::cout << plusOne() << std::endl;
    // std::cout << plusOne() << std::endl;

    for (int count {1}; count <= 100; ++count) {
        std::cout << LCG16() << '\t';
        if (count % 10 == 0) {
            std::cout << '\n';
        }
    }
}
