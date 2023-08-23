/*
 * ALIASES
 *
 * 'using' keyword
 *
 * type alias doesn't create a new type. It 
 * just creates a new identifier for the previous
 * type.
 *
 * aliases are for semantically distinct use cases
 * therefore care should be taken while mixing aliases
 *
 * type aliases help to write platform independent code
 */

#include <iostream>
#include <cstdint>

#include <string>
#include <vector>
#include <utility>
// ---------------------------------------------------------
// these are identical
typedef long sal_uLong;
using sal_uLong = long;

// reason not to use typedef
// typedef Distance double; // wrong
typedef double Distance;

typedef int (*FuncType)(double, char); // harder to parse
using FuncType = int(*)(double, char); // more readible

using name = std::string; // global scope
// ---------------------------------------------------------

using VectPairSI = std::vector<std::pair<std::string, int>>;
// now all this is a new type VectPairSI

using TestScore = int;
TestScore gradeTest(); // makes it more readible
// returns Grade (commenting is enough here)
// int gradeTest();

int main() {
    using Distance = double; // block scoped
    Distance radius { 40 };
    std::cout << radius << std::endl;
    std::uint32_t sahil; // from cstdint

    using Length = Distance;
    Length diameter { 50 };
    std::cout << diameter << std::endl;
}
