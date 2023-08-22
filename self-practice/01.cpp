 /*
  * static_assert(condition, dignostic_message)
  *
  * static_assert can be used. it is a keyword, therefore no header file required, also
  * it does the checking at compiletime, and results in a compiler error in case the condition
  * fails.
  *
  * Because these are evaluated at compiletime, the condition must be a constant expression.
  * for c++17 or greater, the dignostic_message is optional
  */

#include <iostream>

// these conditions are checked at compiletime.
static_assert(sizeof(long) == 8);
static_assert(sizeof(int) >= 4, "int must be 4 bytes or more");

int main() {
    return 0;
}

