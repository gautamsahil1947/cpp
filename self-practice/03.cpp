/* MERSENNE TWISTER RANDOM NUMBER GENERATION
 *
 * The numbers generated here are same for each run of the program.
 * This is because our mersenne twister engine is initialised
 * with the same value (seed value in the start of our program)
 *
 */
#include <random> // randomization capabilities
#include <iostream>


int main() {
    std::mt19937 mt {}; // Instanciate a 32-bit Mersenne Twister engine
    std::uniform_int_distribution die6 {1, 6};

    for (int count {1}; count <= 40; ++count) {
        std::cout << mt() << '\t'; // mt.operator()
        if (count % 5 == 0) {
            std::cout << '\n';
        }
    }

    std::cout << "----------------------------" << std::endl;

    for (int count {1}; count <= 40; ++count) {
        std::cout << die6(mt) << '\t'; // mt.operator()
        if (count % 5 == 0) {
            std::cout << '\n';
        }
    }
}
