/*
 * In order to produce different set of random
 * numbers each time the program is ran, we
 * need to have a different seed value for the 
 * mersenne twister engine to be initialised with
 */

#include <iostream>
#include <random> // for std::mt19937
#include <chrono> // for std::chrono

int main() {

    std::mt19937 mt {static_cast<std::mt19937::result_type>(
        std::chrono::steady_clock::now().time_since_epoch().count() // users cannot change std::chrono::steady_clock
        // std::chrono::high_resolution_clock uses more granular time unit, but uses system time for it, which can
        // be changed by the user
    )};

    std::mt19937 mt1{std::random_device {} ()}; // std::random_device asks the system for random numbers
    /*
     * std::random_device rd {};
     * return rd(); // calling the operator()
     */

    for (int count {1}; count <= 20; ++count) {
        std::cout << mt1() << '\t';
        if (count % 4 == 0) {
            std::cout << '\n';
        }
    }
}
