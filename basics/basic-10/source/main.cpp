#include <iostream>
#include "print_Me.h"

int main() {
    namespace food = me::now;
    food::print_Me();
    return 0;
}